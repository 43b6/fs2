// Room: /open/wu/room/luroom22.c
// ��ɽ�ɵ�����
// ���������� by nike

inherit ROOM;
void create ()
{
  set ("short", "����");
  set ("long", @LONG
������ɽ�ɵ������������ȼ����������ŵ�����,һ���˵ؾͱ��˵ص�ׯ
��������������,�����������ʵľٶ�,ǰ����ǽ�Ϲ���һ�����Ļ�,����
����������ɽ�����������š��Ϸ���һ�Ҷ�д��"�Ҹ��嵨����������"
�˸��֡�
LONG);
  set("exits", ([ /* sizeof() == 5 */
  "north" : "/open/wu/room/luroom19",
  ]));
  set("light_up", 1);
  setup();
}
void init()
 {
    add_action("do_search","search");
    add_action("do_turn","turn");
 }
int do_search(string arg)
{
    object me = this_player();

    if(!arg || arg != "�Ҷ�") return 0;
    if(present("delfire-mark",me))
{
	write("�㷭�˷�ǽ�ϵ��Ҷ���Ҷ��ͷ������һ�����ص���ť��\n");
	me->set("doctor/find_botton",1);
	return 1;
  }
}
int do_turn(string arg)
{
    object me = this_player();

    if(!arg || arg != "��ť") return 0;

    if(present("delfire-mark",me) && me->query("doctor/find_botton") == 1)
{
	write("��ʹ����ת��ת��Ŧ...\n");
	write("�����ڰ���Ŧ��ת���ˣ��Ա߾�¶����һ�Ȱ��ţ�\n");
	write("���߽�����֮�ڣ����־�Ȼ���ж��죡\n");
	me->move("/open/wu/room/pnxroom");
	return 1;
  }
}

