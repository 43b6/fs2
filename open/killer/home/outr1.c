#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "��԰С·");
  set ("long", @LONG
   ������������Ļ��㣬�����ƺ����˲���ֲ�
   ���Ʈ���Ļ������㲻���������У���������ߵ�ֲ�
   �������͹����ͣ��ɱ������������ɱ�ֵ���̳Ŷ����������

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "west" : __DIR__"outr2.c",
      "east" : __DIR__"outr0.c",
]));
  setup();
}