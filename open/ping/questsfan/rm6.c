// Room: /u/d/dhk/questsfan/rm6
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ɽ��"HIG"��"NOR"·");
  set ("long", @LONG
�͹����������������᫲�ƽ��ɽ·���ܾ��ú���·��
�߲����Ƶģ���������һ·ƽ������ʱ���ַ���һ��츯��
��ľ�ƣ�������ֻ������ɿ��Ա�ʶ������ϸһ����֪��ԭ
��һ�쾯ʾ�ƣ��� ������һͷ�Ϲ�ˮ�����룬�˵��������
���������������������������

LONG);

  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"rm7",
  "eastdown" : __DIR__"rm5",
]));

  setup();
}
