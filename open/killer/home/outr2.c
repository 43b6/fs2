#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "��԰");
  set ("long", @LONG
   �������˲����滨��ݣ������в�����ҩ�ݣ�����ȴ���˽����Ĺ��á�
   ���Ʈ���Ļ������㲻���������У�������ϸ������������
   ȴ��������ƺ��в������������Զ����ֲ�������������
   �������ɵ�С���������ɱ�ֵ���̳Ŷ����������

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "north" : __DIR__"outr3.c",
      "west"  : __DIR__"outr5.c",
      "east"  : __DIR__"outr1.c",
]));
  setup();
}