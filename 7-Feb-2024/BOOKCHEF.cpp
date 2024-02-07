//
// Created by yashs on 08-02-2024.
//

#include "BOOKCHEF.h"

void Social::find_post(std::vector<int> *, std::vector<int> *)
{

}

#include <bits/stdc++.h>
using namespace std;

// Use struct to hold both popularity and post content, facilitating correct sorting.
struct Post {
    int popularity;
    string content;
};

// Custom compare function to sort posts in descending order of popularity.
bool comparePosts(const Post &a, const Post &b) {
    return a.popularity > b.popularity;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> specialFriends(n);

    for (int i = 0; i < n; i++) {
        cin >> specialFriends[i];
    }

    // Use separate vectors for special friend posts and normal posts.
    vector<Post> sfPosts, normalPosts;

    while (m--) {
        int f, p;
        string s;
        cin >> f >> p >> s;

        // Check if the friend is special.
        if (find(specialFriends.begin(), specialFriends.end(), f) != specialFriends.end()) {
            sfPosts.push_back({p, s}); // Add to special friend posts.
        } else {
            normalPosts.push_back({p, s}); // Add to normal posts.
        }
    }

    // Sort both vectors using the custom compare function.
    sort(sfPosts.begin(), sfPosts.end(), comparePosts);
    sort(normalPosts.begin(), normalPosts.end(), comparePosts);

    // Output the sorted posts, starting with special friends' posts.
    for (const auto &post : sfPosts) {
        cout << post.content << "\n";
    }
    for (const auto &post : normalPosts) {
        cout << post.content << "\n";
    }

    return 0;
}