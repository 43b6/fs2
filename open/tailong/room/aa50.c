inherit ROOM;

void create ()
{
  set ("short", "��԰");
  set ("long", @LONG
�������������еĻ�԰,���ﲻ�������˸�ʽ���������滨��,
����ֲ�˺ܶ��ϡ�в���,����"�������¡�����������ʮ��ѧʿ"
,����Ҳ����Ϊ�����Ĳ軨��������,���Աߺ�����һ������,��
ȥ�����ɡ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "southeast" : __DIR__"aa54",
  "east" : __DIR__"aa51",
  "south" : __DIR__"aa53",
  "west" : __DIR__"aa32",
]));
}