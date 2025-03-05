import os

cnt_file = 0
cnt_dir = 0

def folder_chk(directory):
    global cnt_file, cnt_dir
    for item in os.listdir(directory):
        path = os.path.join(directory, item)
        if os.path.isdir(path):
            print(path)
            folder_chk(path)
            cnt_dir += 1
        else :
            cnt_file += 1

folder_chk('./')
print(f'Found {cnt_dir} dirs, {cnt_file} files')