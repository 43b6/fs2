// lyssa.c ��Ȯ�� by babe
// mob  set( "no_lyssa", 1 ); �� mob ����
// room set( "no_lyssa", 1 ); �� room Ϊ������
// �����޸�, �� post ��֪ ACKY, thx..

#include <ansi.h>

int update_condition( object me, int duration )
{
	int i, bell;
	object *inv;
	
	me->apply_condition( "lyssa", duration - 1 );

     if( 1 ) {
         me->clear_condition("lyssa");
		message_vision( HIW"$NͻȻ��ͣ�ز���, $N�Ŀ�Ȯ��Ȭ���ˡ�\n"NOR, me );
		return 0;
        }

	if( environment(me)->query("no_lyssa")==1 )
		return 1;

	inv = all_inventory(environment(me));

	switch( random(5) ) {
	case  0 :
		EMOTE_D->do_emote( me, "bite", inv[random(sizeof(inv))]->query("id") );
		break;
	case  1 :
		EMOTE_D->do_emote( me, "dog" );
		break;
	case  2 :
		tell_room( environment(me), HIR + me->query("name") + "��ͣ�صο�ˮ, ����" + me->query("name") + "������, �ƺ��Ǹ���ζ�Ĵ��ͷ��\n"NOR, me );
		break;
	case  3 :
		tell_room( environment(me), HIR + me->query("name") + "��������, �ƺ�������˺��һ�㡣\n"NOR, me );
		break;
	default :
		message_vision( HIR"$N���ſ�ˮ, ���������, ��Ȼ�ǿ�Ȯ�������ˡ�\n"NOR, me );
	}

	// ע��! ��ʽ�е�С����, { } Ū��Ļ�, �߼��ϻ��кܴ�Ĳ���!
	for( i=0; i<sizeof(inv); i++ )
		// ��Ȯ���������: 1.�����Լ� 2.����wiz 3.����
		if( inv[i]!=me && !wizardp(inv[i]) && living(inv[i]) ) {

			// ��Ȯ����Ⱦ����: 1.û�д�ԭ 2.��������һ���������ױ���Ⱦ
			if( !inv[i]->query_condition("lyssa") && random(sizeof(inv))==1 )
				// no_lyssa ������
				if( inv[i]->query( "no_lyssa" ) )
					if( random(2) ) {
						message_vision( HIR"$N�ݺݵ�ҧ��$nһ��!\n\n"NOR
								   "$n����: ����, �ǿ�Ȯ��!\n"
								CYN"$n�Ͻ�������а��, ���ڲ���ð�����������\n"NOR, me, inv[i] );
						if( inv[i]->query("force") >= 100 )
							inv[i]->add( "force", -100 );
						else
							inv[i]->set( "force",    0 );
						tell_object( inv[i], "��ɹ��رƳ���Ȯ��֮������\n" );
					}
					else
						message_vision( HIR"$NͻȻ��������$n!\n\n"NOR
								   "$n����һ��, ���$N���˿�, ��������ʺ��\n\n"
								CYN"$nЦ��: ��ƾ��ô��׾����Ҳ��ҧ��, ����\n"NOR, me, inv[i] );
				// ��Ⱦ�ɹ�
				else {
					message_vision( HIR"$N�ݺݵ�ҧ��$nһ��, $n����Ⱦ�˿�Ȯ����\n"NOR, me, inv[i] );
					if( me->query_condition("lyssa")*2 > 200 )
						inv[i]->apply_condition( "lyssa", 200 );
					else
						inv[i]->apply_condition( "lyssa", me->query_condition("lyssa")*2 );
				}

			// ҧ��(fight)
			bell = me->query("bellicosity");
			bell = bell/1000 + 10;
			if( bell > 50 )
				bell = 50;
			if( random(100) < bell						&& // ҧ�˻���(10%~50%)
			    !environment(me)->query("no_fight") 			&& // ����fight 
			    !(!userp(me)&&!userp(inv[i])) 				&& // mob����ҧ 
			    me->query("combat_exp")*2 > inv[i]->query("combat_exp") 	&& // ��ҧ����֮EXP���� 
			    me->query("combat_exp")/2 < inv[i]->query("combat_exp") 	&& // �Լ�(0.5~2)��֮��
			    !me->is_fighting(inv[i]) ) {				   // ��fight״̬
				message_vision( HIR"$NͻȻ��������$n!\n"NOR, me, inv[i] );
				me->fight_ob(inv[i]);
			}

		}			

	return 1;
}

