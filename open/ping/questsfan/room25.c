// Room: /u/d/dhk/questsfan/room25
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "Բ[1;33m��[0m��");
  set ("long", @LONG
��һ���Ľᾧ��Ȼû����ɫ������ȴ�ǳ��ر����
�ؾ���һ�ſŻ�Բ��͸���⻬���µ�Բ��������ʱ����
һ�������������������ߵĵ�������֮��ȡ��Ի�ѷ
ɫ��ࡣ�������Ƽ����������챦������ѽ���������
�ڴ�����ЩԲ��������������е��ᷳ�أ���ӲҪ����
��������ֻ���ã�������һ���������ݡ�

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room24",
  "westup" : __DIR__"room26",
]));

  setup();
}
