// explosive_spell.c �������ѷ� by ACKY

inherit COMBINED_ITEM;
#include <ansi.h>
#include <combat.h>

int  do_stick( string arg );
void spell_msg( int phase , object me, object target );

int sticking;
object me;

void create()
{
	set_name( HIW""HBYEL"�������ѷ�"NOR, ({ "explosive spell", "spell" }) );
	set("long",@LONG
	һ�������־ɵ�ֽ, ������һЩ��������ֺ�ͼ��, 
    ����ֻ�й�ſ��ö�, �ƺ���ֵ����Ǯ��

	���������(stick)����, ��֪����ʲôЧ����

LONG);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "base_weight", 1000 ); 
		set( "base_unit", "��");
		set( "value", 20000000 );
      		set( "unit", "��" );
   		set( "no_sell", 1 );
   		set( "no_give", 1 );
   		set( "no_drop", 1 );
   		set( "no_sac" , 1 );
	}
	set_amount(1);
	setup();
}

void init()
{
	add_action( "do_stick", "stick" );
}

void heart_beat()
{
	int i, j, scale, armor;
	object *inv;
	inv = all_inventory( environment(me) );

	for( i= 0; i<sizeof(inv); i++ )
		if( userp(inv[i]) )
			if( (inv[i]->query("spell/explosive") + 
	                         me->query("spell/explosive") ) == 3 ) {
	me    ->set( "spell/explosive", 4 );
	inv[i]->set( "spell/explosive", 4 );
	message_vision( HIM"\nͻȻ���ѷ����˸�Ӧ, ��$N���ڱ�����޴������!\n"NOR ,inv[i] );
	message_vision( HIR"
 	                        �x��
                                 ����
                                ��  ��                       ��
                                 ��  ��                     �x��
                                ����  ��                      �� 
       �x��                    �� ���� ��                   ������ 
        �� ��               ���� ������                �� ���� �� 
       �� ��               ����   ������              ��������  �� 
     ���� ����            ������    ��������           ������  �������� 
     ���� ������         ����������  ����������        ������    ��������    ��
    ����  ��������    ������������  ����������       ����������    �������� �� 
  ������    ����    ������������    ������������  ��������������    ��������\n"NOR, me);
	message_vision( HIR"������    ��������   ����������    ������������     ��������������    �������� 
 ������  ���������� ������������    ����������       ������������    �������� 
  ������  ��������   ������������    ��������     ������������      ��������  
   ������    ������   ����������    ������     ����������������      ������  
     ������  ��������������������    ������    ������������      ���������� 
   ��������    ������  ������������  �������� ������������    ���������������� 
    ��������      ������  ��������  ��������  ����������    �������������� 
   ������������    ������  ��������  ������ ����������   �������������� 
       ����������    ��������������    ������������  ������������ 
           ����������      ��������      ��������������������                  
                ��             ��                 ������\n"NOR, me );
	message_vision( HIY"\n$N���ڵı��ѷ��ܵ���Ӧ, �γɼ���ޱȵķ�������!\n"NOR , me );

	for( j=0; j<sizeof(inv); j++ ) {
		if( !living(inv[j]) || inv[j]==me ) continue;
		armor = (int)inv[j]->query_temp("apply/armor");
		scale = (int)(armor/10);
		if( scale<2 ) scale=2 ;
		inv[j]->receive_damage( "kee", (int)(inv[j]->query("max_kee")/scale) );
		inv[j]->receive_wound ( "kee", (int)(inv[j]->query("max_kee")/scale) );
		tell_object( inv[j], HIR"\n��е�ʹ�����ͣ�һ��ǿ������������������ܲ�ס!\n"NOR);
		COMBAT_D->report_status( inv[j], 1 );                
	}
			}
	if( me->query( "spell/explosive" ) == 4 ) {
		set_heart_beat(0);
		me->delete( "spell/explosive" );
		destruct( this_object() );
	}	
}

int do_stick( string arg )
{
	object target;
	
	me = this_player();
	
    if(!arg) return notify_fail("��Ҫ����˭������??\n");
	if( sticking == 1 ) {
		write("�˷����ѽ���������, �޷���ȥ��\n" );
		return 1;
	}
	
	if( arg == me->query("id") ) {
		write("�������Լ�����? ��̫�ðɡ�\n" );
		return 1;
	}
	
	if( !(target = find_player(arg)) ) {
		write("Ŀǰ�����޴���ҡ�\n" );
		return 1;
	}
	
	if( !target=present( arg, environment(me) ) || target == me )
		call_out( "spell_msg", 0, 3, me, me );
	else {
		if( target->query("combat_exp") > me->query("combat_exp")*2 ) {
			write( target->query("name")+"��ɢ��������ʥ��Ϣ, �����޷�������\n" );
			return 1;
		}
	        remove_call_out("spell_msg");
		call_out( "spell_msg", 0, 1, me, target );
	}
	
	return 1;
}

void spell_msg( int phase , object me, object target )
{
   	object spell = this_object();

	switch( phase ) {
	case 1:
		message_vision( "$N��$nһ��ע��, ͵͵����������$n���ϡ�\n", me, target );
		spell->move(target);
		call_out( "spell_msg", 10, 2, me, target );
		break;
	case 2:
	   	message_vision( "$n�����ػ���$N����, ��ʧ�ˡ�\n"NOR, target, spell );
		tell_object( target, HIY"
	                   ;;'      ,
	              ;,,,;;;;'     ;;
	           ,,;;;  ;'       ,;;,;;,
	               ;,;'     ,,;;;'  ;;
	              ,;;;;';;  '' ;;   ;;
	             ,;';;,;'     ;;'   ;;
	             ;' ;;,,,    ;;'   ,;;
	               ,;;'     ,;'    ;;'
	            ;;'';;    , '   ,;;;'
	                ;'  ,;;
	                  ,;'  '';,,
	                ,;;' ';,, ';;;,,
	              ,;;;   ;;;     ';;;,
	            ,;;;'      ,,,
	    ,,''           ,,;;';;         ,,''
	   ;;    ,;;       ' ,;'          ;;    ,;;
	    '';,;''           ';,          '';,;''
	     ,'                ''           ,'
	    ;'                             ;'\n"NOR);
		tell_object( target, HIY"	   ;;          "HIM"�� �� �� �� ��"HIY"     ;;
	  ;;                             ;;
	  ';,,,,       "HIM"�� ת �� �� �U"HIY"    ';,,,,
	    '''';;,    "HIM"�� �� �� ʴ ��"HIY"      '''';;,
	    ,,''       "HIM"�� �� �� ǧ ��"HIY"      ,,''
	   ;;    ,;;   "HIM"�� �� �� �� ��"HIY"     ;;    ,;;
	    '';,;''                        '';,;''
	     ,'                             ,'
	    ;'                             ;'
	   ;;                             ;;
	  ;;                             ;;
	  ';,,,,       "HIM"��  ��  ��  ��"HIY"    ';,,,,
	    '''';;,                        '''';;,
	   ,,     ;;  "HIM"��  ��  ��  ��  ��"HIY"  ,,     ;;
	    '''''''                        '''''''\n"NOR);
		target->set( "spell/explosive", random(2)+1 );
		sticking = 1;
		set_heart_beat(1);
		me = target;
		break;
	case 3:
		message_vision( "$N���ҵؽ�$n���Լ���������\n", me, spell );
		call_out( "spell_msg", 10, 2, me, me );
		break;
	}
}
