// Room: /u/d/dhk/questsfan/room20
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[0;37m��[0m����");
  set ("long", @LONG
��һ��λ�ڹȼ�Ľᾧ��������ɫ�Ĺ�â�����Թ���
˼����һ��Ľᾧ�У�����ʯ �壬��ҫ�۵Ĺ�â��ɢ����
�ټ��ϲ�ʱ��˸�����侧�⣬����һƬ�޼ʵ����Ӱ㣬��
�����ǹ����������Ŀ���ͼ��������������ʣ�ֱ��Ϊ
�㲻Ӧ���´�ʥ�ء���һ·�ۿ�����;һ����ʽ��ɫ��
��ʯ������е��������ɾ��еĸо����ۻ����ң�������
���������ơ���Ķ���ƸС�

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"room21",
  "northup" : __DIR__"room19",
]));

  setup();
}
