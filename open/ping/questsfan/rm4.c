// Room: /u/d/dhk/questsfan/rm4
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ɽ��"HIC"��"NOR"·");
  set ("long", @LONG
��һ��·�ϣ������㿴��һֻ���κ����˶���ȫ��
�Ǳ���ɫ�Ĳ�֪�����񡣶��Ҡ��ڷ���֮Ѹ�١�����������
��̾��Ҳ��Ϊ������������ʹ�����һ��·�����棬������
̽����ȥ��

LONG);

  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"rm3",
  "eastup" : __DIR__"rm5",
]));

  setup();
}
