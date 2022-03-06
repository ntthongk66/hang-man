
#ifndef _LIST_H
#define _LIST_H

    #include<iostream>
    const std::string WORD_LIST_normal[] = {"angle", "ant", "apple", "arch", "arm", "army",
 "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
 "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
 "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
 "cake", "camera", "card", "cart", "carriage", "cat", "chain", "cheese", "chest",
 "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
 "cow", "cup", "curtain", "cushion",
 "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
 "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
 "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
 "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
 "hospital", "house", "island", "jewel", "kettle", "key", "knee", "knife", "knot",
 "leaf", "leg", "library", "line", "lip", "lock",
 "map", "match", "monkey", "moon", "mouth", "muscle",
 "nail", "neck", "needle", "nerve", "net", "nose", "nut",
 "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
 "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
 "rail", "rat", "receipt", "ring", "rod", "roof", "root",
 "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
 "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
 "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
 "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
 "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
 "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
 };

 std::string WORD_LIST_hard[] =  { "implementation", "contiguous", "correspondence", "immutability", "comprehension", "instantiate"
};

const std::string FIGURE[] = {
 " ------------- \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------  \n"
 " |           |  \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O  \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O  \n"
 " |            |  \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O  \n"
 " |           /|  \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------    \n"
 " |            |   \n"
 " |            O   \n"
 " |           /|\\ \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O   \n"
 " |           /|\\  \n"
 " |           /     \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O   \n"
 " |           /|\\ \n"
 " |           / \\  \n"
 " | \n"
 " ----- \n",

};

const int total_words_normal=sizeof(WORD_LIST_normal) / sizeof(WORD_LIST_normal[0]);
const int total_words_hard = sizeof(WORD_LIST_hard) / sizeof(WORD_LIST_hard[0]);


#endif // _FUNC_H

