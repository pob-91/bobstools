/*
 * make an animal class with a noise method DONE
 * inherit from animal and make dog with bark DONE
 * read a txt file DONE
 * manipulate a txt file DONE
 * read, parse and manipulate a json file DONE
 * encrypt and unlock the file
 * make an http request DONE
 * implement the most common data structures (like doing a CS degree), ARRAY, LINKED LIST, TREE
 * implement the most useful algorithms (list sort e.t.c CS degree), INSERTION, DELETION, TRAVERSAL, SEARCHING, SORTING!, MERGING
 * play with ncurses
 * make a basic weather and news console
 * make a web server that gets texts from twilio and adds expenditure to google drive (or some other cool server side thing, use low level shit)
 * on command open a window and render the camera
 * stream video data between two machines via a web server
 * encrypt video data
 * compress video data (how best?)
 * experiment with doing this in unreal
 */

#include <iostream>
#include <curl/curl.h>

using namespace std;

int main(int argc, char ** argv) {
    return 0;
}

/*
static int makeHttpRequestExample() {
    CURL *curl;
    CURLcode result;

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://google.co.uk");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        result = curl_easy_perform(curl);

        if (result != CURLE_OK) {
            cout << "Failed request" << endl;
            curl_easy_cleanup(curl);
            return 1;
        }

        curl_easy_cleanup(curl);
    }
    return 0;
}
*/