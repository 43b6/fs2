// lyssa.c 狂犬病 by babe
// mob  set( "no_lyssa", 1 ); 此 mob 免疫
// room set( "no_lyssa", 1 ); 此 room 为免疫区
// 若需修改, 请 post 告知 ACKY, thx..

#include <ansi.h>

int update_condition( object me, int duration )
{
	int i, bell;
	object *inv;
	
	me->apply_condition( "lyssa", duration - 1 );

     if( 1 ) {
         me->clear_condition("lyssa");
		message_vision( HIW"$N突然不停地颤抖, $N的狂犬病痊愈了。\n"NOR, me );
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
		tell_room( environment(me), HIR + me->query("name") + "不停地滴口水, 你在" + me->query("name") + "的眼里, 似乎是根美味的大骨头。\n"NOR, me );
		break;
	case  3 :
		tell_room( environment(me), HIR + me->query("name") + "朝着你狂吠, 似乎想把你给撕裂一般。\n"NOR, me );
		break;
	default :
		message_vision( HIR"$N流着口水, 嗤牙咧嘴的, 显然是狂犬病发作了。\n"NOR, me );
	}

	// 注意! 程式有点小复杂, { } 弄错的话, 逻辑上会有很大的差异!
	for( i=0; i<sizeof(inv); i++ )
		// 狂犬病处理对象: 1.不是自己 2.不是wiz 3.活着
		if( inv[i]!=me && !wizardp(inv[i]) && living(inv[i]) ) {

			// 狂犬病传染对象: 1.没有带原 2.愈多人在一起愈不容易被传染
			if( !inv[i]->query_condition("lyssa") && random(sizeof(inv))==1 )
				// no_lyssa 者免疫
				if( inv[i]->query( "no_lyssa" ) )
					if( random(2) ) {
						message_vision( HIR"$N狠狠地咬了$n一口!\n\n"NOR
								   "$n惊道: 糟了, 是狂犬病!\n"
								CYN"$n赶紧运起天邪神功, 体内不断冒出阵阵黑气。\n"NOR, me, inv[i] );
						if( inv[i]->query("force") >= 100 )
							inv[i]->add( "force", -100 );
						else
							inv[i]->set( "force",    0 );
						tell_object( inv[i], "你成功地逼出狂犬病之病毒。\n" );
					}
					else
						message_vision( HIR"$N突然疯狂地扑向$n!\n\n"NOR
								   "$n轻轻一闪, 结果$N扑了空, 跌个狗吃屎。\n\n"
								CYN"$n笑道: 就凭这么笨拙的身法也想咬我, 哈～\n"NOR, me, inv[i] );
				// 传染成功
				else {
					message_vision( HIR"$N狠狠地咬了$n一口, $n被传染了狂犬病。\n"NOR, me, inv[i] );
					if( me->query_condition("lyssa")*2 > 200 )
						inv[i]->apply_condition( "lyssa", 200 );
					else
						inv[i]->apply_condition( "lyssa", me->query_condition("lyssa")*2 );
				}

			// 咬人(fight)
			bell = me->query("bellicosity");
			bell = bell/1000 + 10;
			if( bell > 50 )
				bell = 50;
			if( random(100) < bell						&& // 咬人机率(10%~50%)
			    !environment(me)->query("no_fight") 			&& // 可以fight 
			    !(!userp(me)&&!userp(inv[i])) 				&& // mob不互咬 
			    me->query("combat_exp")*2 > inv[i]->query("combat_exp") 	&& // 被咬对象之EXP介于 
			    me->query("combat_exp")/2 < inv[i]->query("combat_exp") 	&& // 自己(0.5~2)倍之间
			    !me->is_fighting(inv[i]) ) {				   // 非fight状态
				message_vision( HIR"$N突然疯狂地扑向$n!\n"NOR, me, inv[i] );
				me->fight_ob(inv[i]);
			}

		}			

	return 1;
}

