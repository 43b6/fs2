// Room: /open/poison/room/path5
inherit ROOM;

void create ()
{
  set ("short", "�ܵ�");
  set ("long", @LONG
���������㷢������ǽ�����б�Ѫ�߰ߵľɺۼ�������
�������ۣ������������ƺ��ڴ���������һ����Ѫս������
�������߿ݹǣ���Ϊ��ɭ�ֲ���
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"path10",
  "east" : __DIR__"path4",
  "northwest" : __DIR__"path6",
]));

  setup();
}
