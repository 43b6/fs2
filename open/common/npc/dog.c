// dog.c by babe

#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
        set_name( "Ұ��", ({ "dog" }) );
        set("race", "Ұ��" );
        set("age", 3 );
        set("long", "һֻ�����������Ұ����\n");

        set("str", 24 );
        set("cor", 26 );

        set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );

        set_temp( "apply/attack", 3 );
        set_temp( "armor", 50 );
        set( "combat_exp", 240 );
	set( "chat_chance", 10 );
        setup();
        carry_object(CENTER_OBJ"bonze");
}


accept_fight(object ob)
{
ob->apply_condition("lyssa",3);

return 1;
}
void init()
{
        if( !query_heart_beat( this_object() ) )
                set_heart_beat(1);
        ::init();
}

void heart_beat()
{
        int i;
        object me, *inv;

        me = this_object();

        if( random(100)<40 ) {
                inv = all_inventory(environment(me));
                
		switch( random(4) ) {
		case  0 :
			command( "bite " + inv[random(sizeof(inv))]->query("id") );
			break;
		case  1 :
			command( "dog" );
			break;
		default :
			message_vision( HIR"$N���ſ�ˮ, ���������, ��Ȼ�ǿ�Ȯ�������ˡ�\n"NOR, me );
		}

		for( i=0; i<sizeof(inv); i++ )
			if( inv[i]!=me && inv[i]->query("id")!="dog" && !inv[i]->query_condition("lyssa") && living(inv[i]) && userp(inv[i]) )
				if( random(sizeof(inv))==1 )
					if( wizardp(inv[i]) || inv[i]->query( "no_lyssa", 1 ) ) {
						message_vision( HIR"$N�ݺݵ�ҧ��$nһ��!\n"NOR
								   "$n����: ����, �ǿ�Ȯ��!\n"
								CYN"$n�Ͻ�������а��, ���ڲ���ð�����������\n"NOR, me, inv[i] );
						if( inv[i]->query("force") >= 100 )
							inv[i]->add( "force", -100 );
						else
							inv[i]->set( "force",    0 );
						tell_object( inv[i], "��ɹ��رƳ���Ȯ��֮������\n" );
					}
					else {
						message_vision( HIR"$N�ݺݵ�ҧ��$nһ��, $n����Ⱦ�˿�Ȯ����\n"NOR, me, inv[i] );
						inv[i]->apply_condition( "lyssa", me->query("age") );
					}       	
        }
        ::heart_beat();
}

//add by poloer...�ٺ�
void die()
{
object me = this_object();
object winner = query_temp("last_damage_from");
message_vision(HIR"$N����ǰ,�ݺݵ�ҧ��$nһ��,$n����Ⱦ��Ȯ����.\n"NOR,me,winner);
winner->apply_condition("lyssa",winner->query("age"));
::die();
}

