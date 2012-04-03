// Room: /u/d/devils/school9.c

inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "梦居");
  set ("long", @LONG
这是任正晴的寝室，摆设十分简单，只有一张床和一些简单家俱，
看似单纯，却暗藏玄机，听说任正晴为了怕人趁他睡觉偷袭他，暗藏了
许多机关，没事别乱闯这里，免的死于非命！
LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "door" : "\n    一个很不容易被发现的暗门，你可以试着推推看(push)，搞不好可以推开。\n",
]));


  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"school8",
]));

  set("light_up", 1);
  setup();
}

void init() {
   add_action("do_push","push");
   add_action("do_search","search");

}
int do_push(string str) {
     if(!str){
        return notify_fail("你要推什么东东？？\n");
        }
      else if(str != "door"){
        tell_object(this_player(),HIR"\n咻～～～ 迎面射来三把飞刀！\n"NOR);
        tell_object(this_player(),"\n\n不过这机关似乎无意伤人，你很从容地就躲过了。\n");
        return 1;}
     else {
        tell_object(this_player(),"哎呀～～～\n\n你只觉手推了个空，身子便往墙后一跌。\n");
        this_player()->move(__DIR__"road1");
        return 1;}
}

int do_search(string str) {
     if(str == "here"){
        tell_object(this_player(),"你觉得东边的墙角(corner)有些奇怪，似乎有什么东西。\n");
        return 1;}
      else if(str != "corner"){
        tell_object(this_player(),"你到底要找什么东西啊！？\n");
        return 1;}
     else {
        tell_object(this_player(),"你发现东边的墙似乎有松动过的痕迹。你猜想可能有一道暗门(door)。\n");
        return 1;}
}

