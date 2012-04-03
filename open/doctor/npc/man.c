#include <ansi.h>
inherit NPC;

void create()
{
    set_name(RED"<����> "NOR"��������", ({"young man","man"}));
    set("long", "һ���������ӣ����ĺ�������һ�㡣\n");
    setup();
}
void init()
{
    add_action("do_check","check");
    add_action("do_heal","cmd save_die");
}
int do_check(string arg)
{
    object me=this_player();

    if(arg == "young man" || arg == "man")
{
    if(!me->query("doctor/agree_woman")==1)
{
	write(HIY"�ϸ����ż��Ĵ�У������ʲô������\n"NOR,me);
	return 1;
}else{
	write(HIY"����������ӵ��˲����Ա�...\n"NOR,me);
	call_out("do_check1",3,me);
	return 1;
    }
  }
}
int do_check1(object me)
{
	write(HIY"��ץ�����������ӵ����󣬿�ʼΪ������...\n"NOR,me);
	call_out("do_check2",5,me);
}
int do_check2(object me)
{
	write(HIY"��о�����΢���������������ƺ����������ڼ�������...\n"NOR,me);
	call_out("do_check3",3,me);
}
int do_check3(object me)
{
	write(HIY"��������üͷ����������ƺ���̫�ֹ�...\n"NOR,me);
	call_out("do_check4",3,me);
}
int do_check4(object me)
{
	write(HIY"�㿴��һ�Խ������ϸ��ˣ�˼���Ų�֪��Ӧ��Ӧ�ø���˵...\n"NOR,me);
	call_out("do_check5",5,me);
}
int do_check5(object me)
{
	write(HIY"��������������ھ�������Ҫ˵������...\n"NOR,me);
	me->set("doctor/check_man", 1);
	me->delete("doctor/agree_woman");
	return 1;
}
int do_heal(string arg)
{
    object me=this_player();
    object ob=this_object();

    if(!arg || arg != "man") return notify_fail("����Ҫ�Ȼ�˭???\n");
    if(!me->query("doctor/save_die"))
	return notify_fail("�������ڵ������ǾȲ������ģ�\n");
    if(me->query("force") < 8000)
	return notify_fail("�������ڵ������ǾȲ������ģ�\n");
    if(ob->query("save")==1)
	return notify_fail("�����������������ģ�������û��Ҫ������ѽ��\n");

	message_vision("$Nʩչ���������ش�������ʥ�ֻش����������ִ���$n��ͷ����������
�����Լ�����������Ҫ��$n�ӹ��ŹؾȻ���!!!\n",me,ob);
	message_vision("$N���ڰ�$n���Ȼ��ˣ�����Ҳ�۳��������!!\n",me,ob);
	message_vision("$N��˻����500��ľ���ֵ��",me);
	write("һ�Ե��ϸ��˼�״���Ͻ����˹�����������˵������λ��ҽ��Ȼ�����鴫����л������СȮһ����
��������Ϊ����ֻ����ű���Ҫ��СȮ�ġ��������������������ھͰ����׸����ˣ�ʵ����ָ�л����");
	me->add("combat_exp",500);
	ob->set("name","��������");
	ob->set("long","һ���ǳ��������������ӣ�");
	ob->set("save",1);
	return 1;
}
