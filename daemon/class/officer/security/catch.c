#include <ansi.h>
int do_command(object me,object ob,string arg)
{
	int i;
	object obj;
	if(me==ob) 
	{
		tell_object(me,"׽���Լ� ?\n");
		return 1;
	}
	if(ob->query("officer_type")!="catcher")
	{
		tell_object(me,"��û��׽���˷���ְȨ��\n");
		return 1;
	}
	obj=find_player(arg);
        if(!obj) obj = find_living(arg);
        if (!obj) obj=LOGIN_D->find_body(arg);
        if(!obj) {
		tell_object(me,"û������ˡ�\n");
		return 1;
        }
	if(!userp(obj))
	{
	message_vision(
	"$N˵������������ȥ׽��$n !\n",me,obj);
	message_vision(
	"$n�����Ը���Ӵ��˲�ǲ\n",me,ob);
	ob->set_leader(me);
	ob->party_npc_set(me,ob);
	}
	else
	{
	message_vision(
	"$N˵��������ȥ׽��"+obj->name()+"\n",me);
	message_vision(
	"$n���������������\n",me,ob);
	message_vision(
	"$n��ʼȥ׽���˷����뿪�����\n",me,ob);
	ob->move(environment(obj));
	message_vision(
	"ͻȻ֮��һ����Ӱ������$N�������\n",ob);
	message_vision(
	"$N�ȵ�����С��"+obj->name()+" ! �������鰸 !!\n",ob,obj);
	ob->kill_ob(obj);
	ob->set_leader(obj);
	}
	if( !ob->query("commander") )
	{
	   ob->set("commander",me->query("id"));
	   ob->set("name",me->query("name")+"��"+ob->query("name"));
	}
	me->add("officer_power",-ob->query("officer_power"));
	return 1;
}
