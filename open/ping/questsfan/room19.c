// Room: /u/d/dhk/questsfan/room19
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[1;35m��[0m����");
  set ("long", @LONG
��һ��λ�ڹȼ�Ľᾧ��������ɫ�Ĺ�â������һ��
�Ľᾧ��һ�ر�����ƣ��ʾ�ʯ �壬��Ϊ�Ŵ���ɫ������
����ʵ۵ļ���Ȩ���ɫ������������ʣ�ֱ��Ϊ��
��Ӧ���´�ʥ�ء���һ·�ۿ�����;һ����ʽ��ɫ�ľ�
ʯ������е��������ɾ��еĸо����ۻ����ң������ü�
�������ơ���Ķ���ƸС�

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "eastup" : __DIR__"room18",
  "southdown" : __DIR__"room20",
]));

  setup();
}
