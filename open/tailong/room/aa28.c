inherit ROOM;

void create ()
{
  set ("short", "��Ժ����");
  set ("long", @LONG
�����������µı�Ժ,������������ȥ���Ƕ��͵�ɽ����,�����ϲ�
��ȥ���Ƕ��ʴ�ʿԺ,��Ҳ���������е�һ�������Ľ����
LONG);

  set("exits", ([ /* sizeof() == 2 */
   "east" : __DIR__"aa29",
   "west" : __DIR__"aa20",
]));
}
