// Room: /open/badman/room/r14

#include </open/open.h>

inherit ROOM;

void create ()
{
  set ("short", "�������칫��");
  set ("long", @LONG
������Ƕ��˹���Ա�ĵ������ģ�����ǿ���ǵ��ж����ɴ˷�
��˾����ϴ������Ҳ�Ǿ������ﴫ������е�����֪������
������������˸�ʽ���������죬�����źŵ���ͨѶ���ߡ������
��һ�߷���һЩ���ӣ������ƺ����ż�ֻ�Ÿ�����ӡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r7",
]));
  set("objects", ([
  BAD_NPC"in" : 1,
]));

  set("light_up", 1);

  setup();
}
