inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

�������ˮ��������ɫ��ƣ�һ�߻���������ͼ�������ֱ����й������
ɫ��ѵ�Ů��--��ʩ���ݼ������������顢��������߽���ȥһ����ÿһ
����������ʫ�����ԡ�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"g2-1.c",
  "west" : __DIR__"gblade",
  "east" : __DIR__"g1-7.c",
]));

  set("light_up", 1);

  setup();
}
