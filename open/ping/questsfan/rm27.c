// Room: /u/d/dhk/questsfan/rm27
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��[1;32m�ݹ�[2;37;0m");
  set ("long", @LONG
����˼�壬���ǳ�����ʽ�������滨��ݵ�ɽ�ȡ��������˵��
������ɽ����ҩ�á���Ч���滨�����ۼ���Ҳ������ȫ�ĵط�����
�Ҵ�������ס��һλ���ţ�����ҩʥ��֮�Ƶ�ǰ����Ҳ��Ϊ���Ĵ���
�������ٲݹȸ����������ص�ɫ�ʡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/oldman.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "eastup" : __DIR__"rm21",
]));
  set("outdoors", "/u/d");
  set("no_fight",1);

  setup();
}
