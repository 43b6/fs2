// /open/center/npc/vendor.c
// ��������������-by nike-
#include <ansi.h>
inherit NPC;

string ask_wine();
string ask_cup();
			
void create()
{
	set_name("���Ƶ���ͷ", ({ "oldman"}) );
	set("gender", "����" );
	set("age", 81);
	set("long", @LONG
һ�����Ƶ���ͷ���������ı��ӣ���֪����ƽʱҲϲ����������
LONG);
	set("attitude", "friendly");
	set("combat_exp",230);
        set("inquiry", ([
                "��������"     :  (: ask_wine :),
                "ʮ�����ű�"     :  (: ask_cup :),
        ]) );
	set("greeting_msg", ({
 	    "��ͷ˵��: �úȵľ��!\n",
	    "��ͷ˵��: ���̻����¾����?\n",	
	}) );
	setup();
}
string ask_wine()
{
    object me=this_player();

    if(me->query("doctor/ask_flor")==1)
{
	command("haha");
	command("say �Ҳ²�...���δ���үҪ�����İɣ�");
	command("say �Ǻ�...ÿ�ζ��ұ������������...");
	command("say ���ֵ�����һ��Ҫ��ʮ�����ű�����...");
	command("say ������������ȥ�ҳ����ű�...Ȼ�������������ͷ...");
	command("say ���Ƿ�ͷ�������...�ã���Ȼû���飬�Ǿ�����˵������");
	me->delete("doctor/ask_flor");
	me->set("doctor/ask_cup",1);
	return "";
  }
}
string ask_cup()
{
    object me=this_player();

    if(me->query("doctor/ask_cup")==1)
{
	command("think");
	command("say ��...��������˵�������в���ʮ�����ű�...");
	command("say ���Ҳ�֪�����ľ�����...");
	command("hoho");
	me->delete("doctor/ask_cup");
	me->set("doctor/find_cup",1);
	return "";
  }
}
int accept_object(object me, object ob)
{
    if(me->query("doctor/get_cup") && ob->query("id")=="ten-cup")
{
	destruct(ob);
	command("nod "+me->query("id"));
	command("say û�������������...");
	command("say �Ҿ�Ҳ����...��ȵȣ�����ȥ���...");
	command("say ټ����ȥ...");
	command("say �����δ���ү�ú���...��ȥ...");
	ob=new("/open/doctor/obj/wine");
	ob->move(me);
	me->delete("doctor/get_cup");
	me->set("doctor/get_wine",1);
	return 1;
  }
}