# A blank Mongoose OS library


## Overview

This blank library is intended to be used as a skeleton for deleloping
Mongoose OS libraries.


```javascript
RPC.addHandler('update', function(args) {
    fname = WORKER_FILE + ".new";
    print('Updating from url... ', args.url);
    download(args.url, fname, function(res) {
        if (res !== null) {
            let s = {
                files: [{
                    file_o: fname,
                    file_n: fname + ".new"
                }],
                status: "TO_COMMIT"
            };
            write_data("updater_data.json", s);
            print('File Updated...Will be Applied on Reboot');
            if (auto_apply)
                Sys.reboot(5);
        } else {
            print('Failed');
        }
    });
    return {
        "result": "Update started !"
    };
});


```
