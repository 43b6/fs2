#include <room.h>
inherit ROOM;
void create ()
{
   set ("short","�������鳤����");
   set ("long", @LONG
	���������˴󷨣�������������������鳤���ڵأ�
	���ܱ�һ����ʽ����Χ���㲢û�п����κ�ͨ����
        ������ǰ���������������鳤---��С�ꡣ

LONG);
  set("no_fight",1);
  set("no_magic", 1);
  set("no_transmit",1);
  set("objects",([
	"/open/killer/headkill/npc/hu_fa5.c":1,
        "/open/main/obj/torch" : 1,
        ]));
  setup();
}