// woodcutter.c

inherit "/std/char/new_npc";

void create()
{
          set_name("Թ��",({"ghost"}));
          set("short","          ");
	set("gender", "����" );
	set("age", 26);
	set("long", "�㿴��һ����׳�Ĵ󺺣����ϴ�����ͨ�Է���·���\n");
	set("combat_exp", 220);

	set("str", 30);
         set("chat_chance",60);
          set("chat_msg",({
       (: command,"get all" :),
          "���ܴ�������Թ��Ŀ޺��������������\n"
	}) );
	set("env/wimpy", 10);
	setup();
}
