#include <ansi.h>
#include <room.h>
inherit ROOM;
                
void create ()
{
  set ("short", "ɱ��������");
  set ("long", @LONG
�������������ƣ��Ĵ�Ʈ����ҩˮζ�������������ܡ������м��и��޴������¯��can)
��һλ���ϵ������ڿ��أ�������û������ʲô���ܣ��治֪�����ڿ���ʲô��
��˵�У�������Ҷ�³ǵ��洫��һ����ҩ�ļ������ɲ���һ���˿ɱ��⡣
��˵��ɱ����ҩ����������Ҷ�³Ǻ������������ġ�

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"r19.c",
]));
  set("objects",([
      "/open/killer/npc/pillman.c":1,]));
  set("item_desc", ([ /* sizeof() == 1 */
      "can" : "¯�л��������У����Ž���ʿɽ�ز������ɡ� ",]));
  setup();
}

void init()
{
add_action("do_secret",({"secret"}));
}

int do_secret()
{
 object me;

 me=this_player();
 if(me->query("class") != "killer")
 return 0;
 tell_object(me,"�ⷿ���Ȼ�����ܣ���������ͨ�������������˹�ȥ\n");
 me->move(__DIR__"mimirm.c");
}