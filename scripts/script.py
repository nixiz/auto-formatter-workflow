import sys
import os
import datetime

# define a function to append a new line to a file
def append_new_line(file_path):
    # open the file in append mode
    with open(file_path, 'a') as f:
        # write a new line to the file
        f.write('// this is \n')

def write_comment_with_timestamp(file_path):
    # get the current datetime
    now = datetime.datetime.now()
    timestamp_str = now.strftime("\n// Comment added on %Y-%m-%d %H:%M:%S\n")

    # open the file in append mode
    with open(file_path, 'a') as f:
        # write the timestamp and comment to the file
        f.write(timestamp_str)



# Get arguments from command line
file_list = sys.argv[1:]

# loop through each file in the list
for file_path in file_list:
    # check if the file exists and if it has a valid extension
    if os.path.exists(file_path) and file_path.endswith(('.c', '.cpp', '.h', '.hpp')):
        # append a new line to the file
        write_comment_with_timestamp(file_path)
        print(f'Added new line to {file_path}')
    else:
        # print a message if the file doesn't exist or has an invalid extension
        print(f'{file_path} is not a C/C++ header or source file')