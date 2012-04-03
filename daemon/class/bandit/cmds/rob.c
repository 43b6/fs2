// rob.c by Oda
#include <ansi.h>
inherit F_GUILDCMDS;
void pre_rob();
void do_rob(object bandit,object ob);
int main(object me, string arg)
{
	object env;
	object *inv;
	int i;
	env = environment(me);
	if( arg=="cancel" ) {
		if( !me->query_temp("������") )
		return notify_fail("�������û�����١�\n");
		tell_object(me, "�����ֹͣ��·���١�\n");
		me->delete("greeting_msg");
		me->set("id", me->query("old_id"));
		me->set("name", me->query("old_name"));
		me->set("nickname", me->query("old_nick"));
		me->set("title", me->query("old_title"));
		me->delete("old_id");
		me->delete("old_name");
		me->delete("old_nick");
		me->delete("old_title");
		me->delete_temp("������");
		me->delete_temp("��׼��");
                env->delete("have_bandit");
		return 1;
	}
	if( me->query_temp("������") )
		return notify_fail("���Ѿ�׼���������������𼱡�\n");
	if( env->query("no_fight") || env->query("no_kill") )
		return notify_fail("���ﲻ������������·���ٵĵط���\n");
	if( me->is_fighting() )
		return notify_fail("�ѵ��˴�����Ǯ��Ȼ����ģ���ʲô����\n");
        if( env->query("have_bandit") )
        return notify_fail("�˴�����ǿ����������һ������ɡ�\n");
	inv = all_inventory(env);
	for( i=0; i<sizeof(inv); i++ ) {
		if( userp(inv[i]) && inv[i]!=me )
			return notify_fail("���ﻹ�б����ڣ���������ᱻ���ְɡ�\n");
	}

	tell_object(me,"�������ס������·��׼�����١�\n");
	if( !me->query("old_id") ) {
		me->set("old_id", me->query("id"));
		me->set("old_name", me->query("name"));
		me->set("old_nick", me->query("nickname"));
		me->set("old_title", me->query("title"));
		me->set("id", "bandit");
		me->set("name", "����ǿ��");
		me->set("title", "ͨ��Ҫ��");
		me->delete("nickname");
	}
	me->set_temp("������", 1);
	me->set_temp("��׼��", 1);
        env->set("have_bandit",1);
	me->set("greeting_msg", ({
(: pre_rob :),
	}) );
	return 1;
}

void pre_rob()
{
	int i;
	object *inv, bandit;
	object ob = this_player();

	if( wizardp(ob) ) return;

	inv = all_inventory(environment(ob));
	for( i=0; i<sizeof(inv); i++ ) {
		if( inv[i]->query_temp("������") )
			bandit = inv[i];
	}

	if( ob->query_temp("������") ) return;
	ob->set_temp("��׼��", 1);
        call_out("do_rob",1,bandit, ob);
}

void do_rob(object bandit, object ob)
{
	int face, money, kee;

	tell_object(bandit,HIW"\nͻȻ֮�����·�����˳�������"+ob->name()+"�󺰣�\n\n����·���ҿ������������գ�Ҫ�Ӵ�·����������·�ƣ���\n\n"NOR);

	face =( bandit->query_skill("change",1)+bandit->query("kar") < random(ob->query("combat_exp")/10000)+ob->query("int") );
	if( face )  tell_object(bandit,HIG"���������汻ʶ���ˡ�\n"NOR);

	tell_object(ob,HIW"\nͻȻ֮��"+(face?bandit->query("old_name"):"һ��������")+"��·�����˳���������󺰣�\n\n����·���ҿ������������գ�Ҫ�Ӵ�·����������·�ƣ���\n\n"NOR);

	money = ( ob->query("combat_exp")/5000 + 1 ) * 10000;

	if( bandit->query("kar")*bandit->query("combat_exp")/10 > ob->query("cor")*ob->query("combat_exp")/20 ) {
		tell_object(bandit,"��������һ�Բ��ϴ����֣�����һ����ɱ֮��"+ob->name()+"���ڼ������ˣ�ֻ�и��׳Ƴ��ķݣ��ԹԵķ��Ϲ�·������\n");
		tell_object(ob,"��������һ�Բ��ϴ����֣�����һ����ɱ֮�������㼼�����ˣ�ֻ�и��׳Ƴ��ķݣ��ԹԵķ��Ϲ�·������\n");
		if( ob->can_afford(money) ) {
			ob->pay_money(money);
			bandit->pay_player(money);
			tell_object(ob,HIC"�㸶��"+(face?bandit->query("old_name"):"������")+"һЩ��·�ѡ�\n"NOR);
			tell_object(bandit,HIC""+ob->name()+"������һЩ��·�ѡ�\n"NOR);
			tell_object(ob,HIY""+(face?bandit->query("old_name"):"������")+"���ŵ�˵��������Ǯ���������С�����ӱ���ร�\n"NOR);
			tell_object(bandit,HIY"�����ŵ�˵��������Ǯ���������С�����ӱ���ร�\n"NOR);
		} else {
			tell_object(ob,(face?bandit->query("old_name"):"������")+"���������ѹ��˰��죬��Ȼһ��ֵǮ�Ľ��Ӷ�û�У�����ʹ����һ�١�\n");
			tell_object(bandit,"����"+ob->name()+"�����ѹ��˰��죬��Ȼһ��ֵǮ�Ľ��Ӷ�û�У�ֻ�ý��Է�ʹ��һ�ٳ�����\n");
			kee = ob->query("eff_kee")*3/4;
			ob->set("eff_kee", kee);
			tell_object(ob,HIC""+(face?bandit->query("old_name"):"������")+"����ݺݵ�����һ�١�\n"NOR);
			tell_object(bandit,HIC"�㽫"+ob->name()+"�ݺݵ�����һ�١�\n"NOR);
			tell_object(ob,HIY""+(face?bandit->query("old_name"):"������")+"���������Ժ�ûǮ��׼�ڽ������ߣ�ʡ�����Ӷ��֣�\n"NOR);
			tell_object(bandit,HIY"�����"+ob->name()+"����Ժ�ûǮ��׼�ڽ������ߣ�ʡ�����Ӷ��֣�\n"NOR);
		}
	} else {
		if( bandit->can_afford(money) ) {
			tell_object(({ob,bandit}),"��������һ�Բ��ϴ����֣�����һ����ɱ֮��û�뵽��ǿ���ķ����������˼ң��������ƨ�������������涼��ʶ�ƣ�ֻ�ùԹ��ϴ���Ǯ��������\n");
			bandit->pay_money(money);
			ob->pay_player(money);
			tell_object(ob,HIC""+bandit->query("old_name")+"������һЩ��·�ѡ�\n"NOR);
			tell_object(bandit,HIC"�㸶��"+ob->name()+"һЩ��·�ѡ�\n"NOR);
		} else {
			tell_object(({ob,bandit}),"��������һ�Բ��ϴ����֣�����һ����ɱ֮��û�뵽��ǿ���ķ����������˼ң��������ƨ�������������涼��ʶ�ƣ�ֻ�ùԹ��ϴ������������\n");
			kee = bandit->query("eff_kee")*3/4;
			bandit->set("eff_kee", kee);
			tell_object(ob,HIC"�㽫"+bandit->query("old_name")+"�ݺݵ�����һ�١�\n"NOR);
			tell_object(bandit,HIC""+ob->name()+"����ݺݵ�����һ�١�\n"NOR);
		}
		tell_object(ob,HIY"���Ц��˵����ƾ��"+bandit->query("old_name")+"�����Ҳ����̫��үͷ�϶���������������´α��ٱ�����������������....\n"NOR);
		tell_object(bandit,HIY""+ob->name()+"��Ц��˵����ƾ��"+bandit->query("old_name")+"�����Ҳ����̫��үͷ�϶���������������´α��ٱ�����������������....\n"NOR);
	}
	ob->delete_temp("��׼��");
	ob->set_temp("������", 1);
}

int help(object me)
{
	write(@HELP

ָ���ʽ�� cmd rob [cancel]

˵������ָ��������͵ؿ�ʼ��ÿһ��·���������Զ��������٣�����δȡ��ǰ
      �Լ������ƶ���
      ���� cancel ������ֹͣ���١�

HELP);
	return 1;
}
