#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "ɽ·");
  set ("long", @LONG

   ��������һ��ϸ���ĵ�ɽ·֮�С����ܴ��������ɱ����
   ������һ��Сׯ԰��Ŀǰ�����ǿ��ú������
   ��һ����������һ����ʾ��(sign)
   

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3   �Ϸ�Ҫ�ӻغ�ɽ�ķ�����*/
     "north" : __DIR__"hr7.c",
     "south" : __DIR__"hr1.c",   
]));
  set("item_desc", ([ /* sizeof() == 2 */
        "sign":" ǰ����ͨ��С�����������������뿪\n",
]));
 set("objects",([
  "/open/killer/npc/spy4.c":1,]));
  setup();
}
