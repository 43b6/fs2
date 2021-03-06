// Room: /open/badman/room/r13

#include </open/open.h>

inherit ROOM;

void create ()
{
  set ("short", "厨房");
  set ("long", @LONG
你顺着香味的来源走了进来，原来这里就是这家饭馆的厨房，
令人惊讶的是，这里的掌厨竟然是爱吃人肉出名的李大嘴，让你不
禁要怀疑这里卖的是什么肉了。想到这里，原本炉子上令人垂涎三
尺的香味也开始变得令人作恶，你忽然发现李大嘴正流着口水盯着
你猛看呢！识相的还是快溜吧。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r1",
]));
  set("objects", ([ /* sizeof() == 1 */
  BAD_NPC"lee" : 1,
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object who, string dir)
{
  if( present("lee da tswei", this_object()) ) {
  if( dir=="south" && who->query_skill("badforce",1)>30 && who->query("bellicosity")>200 && who->query("quests/evilup")!=1 && who->query_temp("evilup")!=1) {
  switch(random(3)) {
  case 0:
    who->set_temp("evilup",1);
   who->set_temp("yang",1);
   tell_object(who,"[1;33m李大嘴咧嘴说道 :唉呦 ,怎啦 ?愁眉苦脸的 ,啥 ?不知道怎么更好\n好利用恶化魔功 ?嘿 ,这个简单....不过你倒要帮我做件事 ,只要\n你把杨心婷那小妮子拿来给我嚐嚐 ,包准教到你会为止 !....记得\n ,要新鲜的喔。[0m\n");
    break;
  case 1:
    who->set_temp("evilup",1);
   who->set_temp("kou",1);
   tell_object(who,"[1;33m李大嘴咧嘴说道 :唉呦 ,怎啦 ?愁眉苦脸的 ,啥 ?不知道怎么更好\n好利用恶化魔功 ?嘿 ,这个简单....不过你倒要帮我做件事 ,只要\n你把郭啸风那条汉子拿来让我嚐嚐 ,包准教到你会为止 !....记得\n ,要新鲜的喔。[0m\n");
    break;
  case 2:
    who->set_temp("evilup",1);
   who->set_temp("chen",1);
   tell_object(who,"[1;33m李大嘴咧嘴说道 :唉呦 ,怎啦 ?愁眉苦脸的 ,啥 ?不知道怎么更好\n好利用恶化魔功 ?嘿 ,这个简单....不过你倒要帮我做件事 ,只要\n你把陈玄龙那结实的身子拿来让我品味品味 ,包准教到你会为止 !\n....记得 ,要新鲜的喔。[0m\n");
    break;
    default:
    return notify_fail("嘿 ,加油啊 !\n");
   }
  }
}
    return ::valid_leave(who, dir);
}
