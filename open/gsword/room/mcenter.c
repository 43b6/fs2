// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
  set ("short", "��ɽ����֮����");
  set ("long", @LONG
���еĻ���������������,�㷢���㴦��һ������ķ���,����
�и��޴��̫��ͼ,�ڰ׷�������һ����¯(golden fireplace)��
ת,���ܵ�ǽ���˸���߲ʹ�â,���������̻�������,�������ɽ
��������� ??
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "golden fireplace" : "��¯�������:
    ��������,�仯����֮��,���ľ,ľ����,
    ����ˮ,ˮ�˻�,��˽�.  ��ɽ����,��˶���...
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"mroom6",
]));
  set("light_up", 1);

  setup();
}
