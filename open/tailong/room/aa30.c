inherit ROOM;

void create ()
{
  set ("short", "��Ժ����");
  set ("long", @LONG
�����������µı�Ժ,������������ȥ���Ƕ��͵�ɽ����,�����ϲ�
��ȥ�����껨Ժ,��Ҳ���������е�һ�������Ľ����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"aa27",
  "west" : __DIR__"aa29",
]));
}
