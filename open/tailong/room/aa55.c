inherit ROOM;

void create ()
{
  set ("short", "��԰");
  set ("long", @LONG
�������������еĻ�԰,���ﲻ�������˸�ʽ���������滨��,
����ֲ�˺ܶ��ϡ�в���,����"�������¡�����������ʮ��ѧʿ"
,����Ҳ����Ϊ����Ĳ軨��������,���Աߺ�����һ������,��
ȥ�����ɡ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"aa59",
  "northeast" : __DIR__"aa58",
  "south" : __DIR__"aa29",
  "northwest" : __DIR__"aa56",
]));
}
