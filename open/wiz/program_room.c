// Room: /open/wiz/program_room.c

inherit ROOM;

void create ()
{
  set ("short", "��ʦ��ʽ����ĵ�������");
  set ("long", @LONG
�������ṩ��ʦ���۳�ʽд���ĵõĵط������ڴ��ӿԾ����,
������������Լ����������ҳ��ⷨ, ���ߴ� /doc ���ҳ���, ��
��ķ������������ϵ���ʦ, �������Լ��ϰ�(˭����Ҫ����), ��
��������濴��, Ҳ����н��, ���û��, �� post ��, ���ź�
����ܻ�ô�. ����, �ڴ���������ļ���Ҳ����෶������
�����ο�, ������ǰ���ι۱Ƚ�.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/wiz/hall1",
]));

  set("no_clean_up", 0);


  setup();
  call_other("/obj/board/program_b", "????");
}
