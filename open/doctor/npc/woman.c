#include <ansi.h>
inherit NPC;

void create()
{
    set_name("�ϸ���", ({"old woman","woman"}) );
    set("title",HIR"��������"NOR);
    set("long", "һ�������������ϸ��ˡ�\n");
    set("gender", "Ů��");
    set("age", 73);
    set("attitude", "peaceful");
    set("chat_chance", 4);
    set("chat_msg", ({
         "�ϸ��˽�����������ȥ��һ�����˵����ӣ�\n",
        }));
    setup();
}
void init()
{
    object me=this_player();
    ::init();

    if(interactive(me) && !is_fighting())
{
        remove_call_out("greeting");
        call_out("greeting", 1, me);
}
    add_action("do_say","say");
}

int do_say(string arg)
{
    object me=this_player();

    if(!me->query("doctor/savedie")==1 && (int)me->query("combat_exp") >= 2000000)
{
    if( arg == "��" )
{
	command("wa "+me->query("id"));
	command("say ����̫��л���ˣ��Ҷ��ӵõ����ֲֹ����鷳�㿴��(check)����");
	me->set("doctor/agree_woman", 1);
	return 1;
}
    if( arg == "����" )
{
	command("sigh "+me->query("id"));
	command("say �����Ǹ������Ե�ҽ��......");
	return 1;
  }
}
    if(me->query("doctor/check_man")==1)
{
    if( arg == "����ƺ���̫�ֹ�" )
{
	write("������ϸ��ˣ����˵�����ƺ���̫�ֹ�...\n"NOR);
	command("nod "+me->query("id"));
	command("say ����ҽҲ������˵�ģ�����ҽ�������ᵽʲô������֮����֮���...");
	command("say Ҫ�ǿ����ҵ�����ӵ�������������ˣ����ж��...");
	command("sigh");
	me->set("doctor/tell_woman", 1);
	return 1;
    }
  }
}
void greeting(object me)
{
    if(me->query("doctor/agree_woman")==1)
{
	command("say �鷳���쿴���ҵĶ��Өڣ�");
}
    if(me->query("class")=="doctor" && !me->query("doctor/savedie")==1)
{
	write(HIY"�ϸ��˽�����������֣�һ�����˵������㣡\n"NOR);
	write(HIY"�ϸ��˿޵�����λ��ҽ�������Ⱦ��ҵĺ��Ӻò��ã���\n"NOR);
	command("sob "+me->query("id"));
}
	else
{
	command("sigh");
	command("say �������ǰﲻ��æ��...");
  }
}