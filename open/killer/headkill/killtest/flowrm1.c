inherit ROOM;
void create()
{
set("short", "ʥ������֮�����");
set("long", @LONG
	����Ҷ��ɱ���̷����������ƺ�������һ�ֲ�֪���ĵط���
	���ܵķ��伸������ʯͷ����ģ��������Ҳ������ʶ���й�ʽ������һ����
	�Ѳ������Ѿ������й������ˣ�����ɣ�
	����Ҷ��ɱ��˵������Ӧ������ν��ʥ����ڣ�Ҳ����������㡣
	ǰ����һ��������ʶ�Ļ�԰���ƺ���ɱ����̳�Ļ�԰����������
	����Ӧ�ý�ȥ�ɡ���������

LONG );
set("exits", ([ /* sizeof() == 2 */
  "enter": __DIR__"flowrm2.c",
]));

set("no_transmit",2);
set("no_auc",1);	//����������ʥ��֮�䣬��������auc
set("valid_startroom", 1);
setup();
}

int valid_leave(object me, string dir)
{//��ͨ��8����������ȥ
  me->set_temp("killrun",1);
  return 1;
}
