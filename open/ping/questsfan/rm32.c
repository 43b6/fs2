// Room: /u/d/dhk/questsfan/rm28
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��[1;35m�ɹ�[2;37;0m");
  set ("long", @LONG
��������ɽ�������ģ���ɽ˫�ȡ�֮һ�����š����˹��硯����
�ƵĲ��ɹȡ���һЩ����ҥ���������޵�֮���ڽ����õ�����֮ǰ��
ǰ���˹����С���סһ��ʱ�ձ��������õ����ɡ���������ϸ������
����һ���������˵�ֻ������һ����ͨ��ɽ�ȣ������ǻ�����Ϊ����
������һ����ˣ�ʵ�ڿ����������ر��ںδ���ʵ����������ѽ��

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/stone1.c" : 1,
]));
  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"rm33",
  "west" : __DIR__"rm31",
]));

  setup();
}
