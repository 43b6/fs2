inherit ROOM;

void create ()
{
  set ("short","��Ժ����");
  set ("long", @LONG
�ߵ�����,��Ȼ������һ����紵��,�����Ŀ�����,��������,����ׯ
����ΰ�Ĵ��۱���,ʹ�����Ե����ȥ�ΰ�һ�¡�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"aa27",
  "south" : __DIR__"aa22",
]));
}
