// master_death.c by babe

#include <ansi.h>

inherit NPC;

string spiritism();

void create()
{
	set_name( "�ϲ���", ({ "master death", "master", "death" }) );
	set( "title", "�س�����" );
	set( "nickname", HIB"̫��"NOR );
	set( "gender", "����" );
	set( "age", 1000 );
	set( "attitude", "hero");
	set( "long",
		"    �ϲ��������ݿ�\�ݰ���, �������ӱ����Ӳ, ����\n"
		"û������, ���ۿ���ȴ�ڳ���, ���������޾��׶�, ɢ\n"
		"�����ޱ�Ũ�ҵ�������Ϣ��\n"
		"    �ϲ���������һ�С����������ư�����, �����Գ�\n"
		"������, �����ڲ�֪Ϊ�������ڴˡ�\n\n" );
	set( "combat_exp"  , 20000000 );
	set( "max_kee"     , 15000 );
	set( "max_force"   , 10000);
	set( "force"       , 10000);
	set( "force_factor", 10 );
	set( "no_lyssa", 1 );
	set( "chat_chance" , 10 );
	set( "chat_msg", ({
		(: command ("say �����˵ȿ����!") :),
		(: command ("say ��ʲô��!") :),
		(: command ("say �߿��߿�!") :),
		(: command ("say ���ҹ�!") :),
		(: command ("say ����!") :),
		(: command ("say ��!") :),
		(: command ("say �����������?") :), 
		(: command ("say ������ʿ����һȺ�ڹ����˵�!") :), 
		(: command ("say �����������?") :), 
		(: command ("spit") :),
		(: command ("yawn") :),
		}) );
        set("inquiry",([
		]));
	setup();
}

void init()
{
	if( !query_heart_beat(this_object()) )
		set_heart_beat(1);
	::init();
}

int accept_fight( object who )
{
	object me = this_object();
	command( "say ����!!!\n" );
	message_vision( HIR"$N���𶥼�"RED"������"HIR", ���׶���͸��, �صײ��ϴܳ�����а�顣\n\n"NOR, me );
	message_vision( HIR"��ʱ��ŭ�����Х������, ����˶������ơ�\n\n"NOR, me );
	message_vision( HIR"$N��а������Χס, ˲��㱻��ʴ����, �ֲ����ˡ�\n\n"NOR, who );
	tell_object( who , "�����ǰһƬ�ڰ�......\n" );
        who->remove_all_killer();
        who->unconcious();
        load_object( "/open/center/room/inn" );                 
        who->move( "/open/center/room/inn" );                     
        return 1;                                
}

int accept_kill( object who )
{
	object me = this_object();
	command( "say ����!!!\n" );
	message_vision( HIR"$N���𶥼�"RED"������"HIR", ���׶���͸��, �صײ��ϴܳ�����а�顣\n\n"NOR, me );
	message_vision( HIR"��ʱ��ŭ�����Х������, ����˶������ơ�\n\n"NOR, me );
	message_vision( HIR"$N��а������Χס, ˲��㱻��ʴ����, �ֲ����ˡ�\n\n"NOR, who );
	tell_object( who , "�����ǰһƬ�ڰ�......\n" );
        who->remove_all_killer();
        who->unconcious();
        load_object( "/open/center/room/inn" );                    
        who->move( "/open/center/room/inn" );                       
        return 1;                                
}

string spiritism()
{
	object	me, who;
	string	g, respect;

	me	= this_object();
	who	= this_player();
	g	= who->query("gender")=="����" ? "��": "��";
	respect	= RANK_D->query_respect(who);

	if( !who->query("pker") ) {
		if( who->query("spiritism/0")==1 ) {
			command( "say ��, ͽ����ش�Щʲô�ö�����Т��Ϊʦ��?" );
			return "";
		}
		if( who->query_temp("spiritism")==1 ) {
			switch( random(5) ) {
			case  0 :
				command( "say ���!" );
				break;
			case  1 :
				command( "say " + respect + "���������������?" );
				break;
			case  2 :
				command( "say ����!" );
				break;
			case  3 :
				command( "say " + respect + "���ٲ����, �ݹ��Ϸ򲻿�����!" );
				break;
			default :
				command( "say ��!" );
			}
			return "";
		}
		command( "look "+who->query("id") );
		if( who->query("cor")< 20 ) {
			switch( random(2) ) {
			case  0 :
				who->do_command("cower");
				command( "say ��! �Ϸ�ֻ�Ƶ����е�ʶ���ˡ�" );
				who->do_command("cower");
				command( "say " + g + "�úÿ���" + g + "�Լ�! ���ڶ����ų�ʲô�����ˡ�" );
				command( "say ���ǿ���ɡ�" );
				who->do_command("flee");
				break;
			default :
				who->do_command("cower");
				me ->do_command("? "+who->query("id"));
				command( "say ��! ��ƾ" + g + "���ֻ�ɫҲ����ϰ����? ��!" );
				who->do_command("cower");
				command( "say " + g + "�úÿ���" + g + "�Լ�! ���ڶ����ų�ʲô�����ˡ�" );
				command( "say ���ǿ���ɡ�" );
				who->do_command("flee");
			}
			who->set_temp( "spiritism", 1 );
			return "";
		}
		if( who->query("cor") > 34 ) {
			me ->do_command("hmm");
			command( "say " + respect + "���ѵõ���š�" );
			command( "say �������ǵ�֤��" + g + "���������Ϸ����ơ�" );
			who->set_temp( "spiritism", 1 );
			return "";
		}
		switch( random(2) ) {
		case  0 :
			command( "say �Ϸ�ֻ�������е�ʶ���ˡ�" );
			command( "say ��" + respect + "��ɱ��ʱ�������Ұɡ�" );
			break;
		default :
			command( "say ��ϰ�������й��˵�ʶ��");
			command( "say �Ϸ���" + respect + "�����ʺ���ϰ������" );
			command( "say ���ǹ�һ������ȥ�ɡ�" );
		}
		who->set_temp( "spiritism", 1 );
                return "";
        }
	if( !who->query_temp("spiritism") ) {
		command( "say ɱ��������Ĺ����ʲô?" );
		command( "say �����������㱨����?" );
		command( "say �����β���Ӱ�! ��!" );
		return "";
        }        
	message_vision( HIY"\n$Nһ���Ц��\n\n"NOR, me );
	command( "say �ܺ�, �Ϸ������" + respect + "��" );
	command( "say ��ʹ�" + respect + "�����ķ�, ���������֪С�����ҹ۴˾�����ѧ��" );
	command( "say �Ϸ�����������" + g + "ͨ��������Ϊ���յĹؿ���" );
	command( "say ������!" );
	tell_room( environment(me), HIM + me->query("name") + "��������"RED"������"HIM", ɢ��������Ũ�ҵ�������Ϣ��\n"NOR, who );
	who->set( "spiritism/0", 1 );
	who->unconcious();
	return "";
}

void die()
{
	object	who = query_temp("last_damage_from");
	object	me  = this_object();
	command( "say ����!!!\n" );
	message_vision( HIR"$N���𶥼�"RED"������"HIR", ���׶���͸��, �صײ��ϴܳ�����а�顣\n\n"NOR, me );
	message_vision( HIR"��ʱ��ŭ�����Х������, ����˶������ơ�\n\n"NOR, me );
	message_vision( HIR"$N��а������Χס, ˲��㱻��ʴ����, �ֲ����ˡ�\n\n"NOR, who );
	tell_object( who , "�����ǰһƬ�ڰ�......\n" );
        who->remove_all_killer();
        who->die();
	:: die();
}

