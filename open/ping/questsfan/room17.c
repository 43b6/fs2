// Room: /u/d/dhk/questsfan/room17
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[1;34m��[0m����");
  set ("long", @LONG
��һ��λ�ڹ�Ե�Ľᾧ��������ɫ�Ĺ�â�����Թ���
˼����һ��Ľᾧ�У�����ʯ �壬������ɫ��������ʱ��
�̵�ɢ����������������Ϣ��������������һ���Ĵ��ۣ�
�������ơ���һ·�ۿ�����;һ����ʽ��ɫ�ľ�ʯ����
��е��������ɾ��еĸо����ۻ����ң������ü�������
�ơ���Ķ���ƸС�

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"room18",
  "eastup" : __DIR__"room16",
]));

  setup();
}
