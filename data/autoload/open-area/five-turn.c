//Edit by Neverend 2001/10/19

inherit ITEM;
#include <ansi.h>
string bname;

object me=this_player();
object ob=this_object();

void create()
{
	seteuid(getuid());
	set_name(HIC"��ת"HIW"��"HIY"����"NOR,({"five turn","five","turn"}));
	set("long", @LONG
    ����ɽׯ����ׯ����Ǿ���ׯ���������족����Я��������
��ഫ����ܻ��������ע����У����Ի�ü��������������
�ṩ�����ͷ����������������������һ��һ���ľ��鱦����ǿ�
������ؽ������Ҫ���

    �˱�������Ƚ�ע�������ϵ������ȡ�������У��������ã���
���Խ�������������ע��Ļ�����ȡ�������У������豾����һ����
����Ϊǣ���������޷����á�

��ȡ���Ƿ�ʽ��  suck soul  (���Լ�)
                suck id    (�ӱ�������ȡ)
������ת��ʽ��  turn five  (������ת)
                stop five  (�ر���ת)
LONG);

	set_weight(1000);
	set("value",100000);
	set("unit","��");
	set("magic-manor-f",1);
	set("no_put",1);
	set("no_drop",1);
	set("no_get",1);
	set("no_sell",1);
	set("no_auc",1);
	set("no_give",1);

	setup();
}

void init()
{
	add_action("do_suck","suck");
	add_action("do_turn","turn");
	add_action("do_stop","stop");

    if( !ob ) return ;
    if( !me ) return ;

	if( !ob->query("boss") )
	{
	ob->set("boss",me->query("id"));
	}
}

int do_suck(string arg)
{
	object npc;
	int mag1,mag2,mag3,mag4,mag5,su1,su2,su3,su4,su5;

	mag1 = me->query_temp("magic-manor/goldmagic");
	mag2 = me->query_temp("magic-manor/woodmagic");
	mag3 = me->query_temp("magic-manor/watermagic");
	mag4 = me->query_temp("magic-manor/firemagic");
	mag5 = me->query_temp("magic-manor/soilmagic");
	su1 = ob->query("suck1");
	su2 = ob->query("suck2");
	su3 = ob->query("suck3");
	su4 = ob->query("suck4");
	su5 = ob->query("suck5");

	if( !arg )
	return 0;

	if( ob != this_object() )
	return 0;

	if( arg == "soul" )
	{
	  if( su1 == 1 && su2 == 1 && su3 == 1 && su4 == 1 && su5 == 1 )
	  return notify_fail("���޷�����ȡ�κλ��ǡ�\n");
	  if( !mag1 && !mag2 && !mag3 && !mag4 && !mag5 )
	  return notify_fail("������û�л��ǿ���ȡ��\n");

	    if( mag1 == 1 )
	    {
	      if( ob->query("suck1") != 1 )
	      {
	      message_vision(ob->name()+HIY"����һ����⣬��$N�����еĽ�ɫ����������"NOR+ob->name()+HIY"��\n"NOR,me);
	      ob->set("suck1",1);
	      me->delete_temp("magic-manor/goldmagic");
	      }else{
	      message_vision(ob->name()+HIY"�Ѿ���ȡ��ɫ�����ˡ�\n"NOR,me);
	      }
	    }
	    if( mag2 == 1 )
	    {
	      if( ob->query("suck2") != 1 )
	      {
	      message_vision(ob->name()+HIG"����һ����⣬��$N�����е���ɫ����������"NOR+ob->name()+HIG"��\n"NOR,me);
	      ob->set("suck2",1);
		  me->delete_temp("magic-manor/woodmagic");
	      }else{
	      message_vision(ob->name()+HIG"�Ѿ���ȡ��ɫ�����ˡ�\n"NOR,me);
	      }
	    }
	    if( mag3 == 1 )
	    {
	      if( ob->query("suck3") != 1 )
	      {
	      message_vision(ob->name()+HIC"����һ����⣬��$N�����е�ˮɫ����������"NOR+ob->name()+HIC"��\n"NOR,me);
	      ob->set("suck3",1);
	      me->delete_temp("magic-manor/watermagic");
	      }else{
	      message_vision(ob->name()+HIC"�Ѿ���ȡˮɫ�����ˡ�\n"NOR,me);
	      }
	    }
	    if( mag4 == 1 )
	    {
	      if( ob->query("suck4") != 1 )
	      {
	      message_vision(ob->name()+HIR"����һ����⣬��$N�����еĺ�ɫ����������"NOR+ob->name()+HIR"��\n"NOR,me);
	      ob->set("suck4",1);
	      me->delete_temp("magic-manor/firemagic");
	      }else{
	      message_vision(ob->name()+HIR"�Ѿ���ȡ��ɫ�����ˡ�\n"NOR,me);
	      }
	    }
	    if( mag5 == 1 )
	    {
	      if( ob->query("suck5") != 1 )
	      {
	      message_vision(ob->name()+NOR+YEL"����һ����⣬��$N�����е���ɫ����������"NOR+ob->name()+NOR+YEL"��\n"NOR,me);
	      ob->set("suck5",1);
	      me->delete_temp("magic-manor/soilmagic");
	      }else{
	      message_vision(ob->name()+NOR+YEL"�Ѿ���ȡ��ɫ�����ˡ�\n"NOR,me);
	    }
	  }
	return 1;
	}

	if( !npc = present(arg,environment(me)) )
//	if( !(npc = find_player(arg)) )
	return notify_fail("�˵�û���������������\n");

	if( arg == arg )
	{
	mag1=npc->query_temp("magic-manor/goldmagic");
	mag2=npc->query_temp("magic-manor/woodmagic");
	mag3=npc->query_temp("magic-manor/watermagic");
	mag4=npc->query_temp("magic-manor/firemagic");
	mag5=npc->query_temp("magic-manor/soilmagic");

	  if( su1 == 1 && su2 == 1 && su3 == 1 && su4 == 1 && su5 == 1 )
	  return notify_fail("���޷�����ȡ�κλ��ǡ�\n");
	  if( !su1 && !su2 && !su3 && !su4 && !su5 )
	  return notify_fail("��û����ȡ�κλ������������޷���ȡ�������ϵĻ��ǡ�\n");
	  if( !mag1 && !mag2 && !mag3 && !mag4 && !mag5 )
	  return notify_fail("�Է�����û�л��ǿ���ȡ��\n");

	    if( mag1 == 1 )
	    {
	      if( ob->query("suck1") != 1 )
	      {
	      message_vision(ob->name()+HIY"����һ����⣬��$N�����еĽ�ɫ����������"NOR+ob->name()+HIY"��\n"NOR,npc);
	      ob->set("suck1",1);
	      npc->delete_temp("magic-manor/goldmagic");
	      }else{
	      message_vision(ob->name()+HIY"�Ѿ���ȡ��ɫ�����ˡ�\n"NOR,npc);
	      }
	    }
	    if( mag2 == 1 )
	    {
	      if( ob->query("suck2") != 1 )
	      {
	      message_vision(ob->name()+HIG"����һ����⣬��$N�����е���ɫ����������"NOR+ob->name()+HIG"��\n"NOR,npc);
	      ob->set("suck2",1);
	      npc->delete_temp("magic-manor/woodmagic");
	      }else{
	      message_vision(ob->name()+HIG"�Ѿ���ȡ��ɫ�����ˡ�\n"NOR,npc);
	      }
	    }
	    if( mag3 == 1 )
	    {
	      if( ob->query("suck3") != 1 )
	      {
	      message_vision(ob->name()+HIC"����һ����⣬��$N�����е�ˮɫ����������"NOR+ob->name()+HIC"��\n"NOR,npc);
	      ob->set("suck3",1);
	      npc->delete_temp("magic-manor/watermagic");
	      }else{
	      message_vision(ob->name()+HIC"�Ѿ���ȡˮɫ�����ˡ�\n"NOR,npc);
	      }
	    }
	    if( mag4 == 1 )
	    {
	      if( ob->query("suck4") != 1 )
	      {
	      message_vision(ob->name()+HIR"����һ����⣬��$N�����еĺ�ɫ����������"NOR+ob->name()+HIR"��\n"NOR,npc);
	      ob->set("suck4",1);
	      npc->delete_temp("magic-manor/firemagic");
	      }else{
	      message_vision(ob->name()+HIR"�Ѿ���ȡ��ɫ�����ˡ�\n"NOR,npc);
	      }
	    }
	    if( mag5 == 1 )
	    {
	      if( ob->query("suck5") != 1 )
	      {
	      message_vision(ob->name()+NOR+YEL"����һ����⣬��$N�����е���ɫ����������"NOR+ob->name()+NOR+YEL"��\n"NOR,npc);
	      ob->set("suck5",1);
	      npc->delete_temp("magic-manor/soilmagic");
	      }else{
	      message_vision(ob->name()+NOR+YEL"�Ѿ���ȡ��ɫ�����ˡ�\n"NOR,npc);
	      }
	    }
	}

	return 1;
}

int do_turn(string arg)
{
	if( !arg )
	return 0;
	arg=lower_case(arg);
	if( !ob = present(arg,me) )
	return 0;
	if( ob != this_object() )
	return 0;
	if( me->query_temp("magic-manor/turn-five") )
	return notify_fail("���Ѿ���ʹ��"+ob->name(1)+"��\n");

	message_vision(HIW"$N"HIW"���ᴥ��$n"HIW"�����͸��ˮ����ˮ��������������Ӧ��\n\n"NOR,me,ob);
	message_vision(HIY"ֻ��$n"HIY"�����̺��Ļ���������ʼ��ת��ͣ��������͵Ĺ�â��\n"NOR,me,ob);
	me->set_temp("magic-manor/turn-five",1);
	ob->set("name",HIW"(��ת��) "+ob->name(1));
	set_heart_beat(1);
	return 1;
}

int do_stop(string arg)
{
	if( !arg )
	return 0;
	arg=lower_case(arg);
	if( !ob = present(arg,me) )
	return 0;
	if( ob != this_object() )
	return 0;
	if( !me->query_temp("magic-manor/turn-five") )
	return notify_fail("��û��ʹ��"+ob->name(1)+"��\n");

	ob->set("name",HIC"��ת"HIW"��"HIY"����"NOR);
	message_vision("$n"NOR+YEL"�����̺��Ļ�����������ֹͣ��ת����͵Ĺ�â����������\n"NOR,me,ob);
	me->delete_temp("magic-manor/turn-five");
	set_heart_beat(0);
	return 1;
}

void heart_beat()
{
	object *enemy;
	int i,j,k,su1,su2,su3,su4,su5,cn,cr,cs,kr,it,pr,si,sr;

	cn = me->query("con");
	cr = me->query("cor");
	cs = me->query("cps");
	kr = me->query("kar");
	it = me->query("int");
	pr = me->query("per");
	si = me->query("spi");
	sr = me->query("str");

	su1 = ob->query("suck1");
	su2 = ob->query("suck2");
	su3 = ob->query("suck3");
	su4 = ob->query("suck4");
	su5 = ob->query("suck5");

	enemy=me->query_enemy();
	i=sizeof(enemy);

	if( !objectp(me) )
	{
	set_heart_beat(0);
	return;
	}

	if( me->is_fighting() && me->query_temp("magic-manor/turn-five") == 1 )
	{
	  if( !su1 && !su2 && !su3 && !su4 && !su5 )
	  {
	    if( random(100) < (int)((kr+sr+cn+cr+si+cs)/12) )
	    {
	    message_vision(HIW"��"HIC"��ת"HIW"��"HIY"����"HIW"��ת��΢������ɫ��⣬���ḧƽ��$N���˿ڡ�\n"NOR,me,ob);
	    me->receive_curing("kee",500);
	    me->receive_heal("kee",500);
	    }
	  }else{
//���µĽ�ľˮ�������ֵ�������Ҫ������ľ��ˮ��������������е�
//����������ȡ�������Ļ��ǣ����ܷ������ã�����ÿһ������д�ɶ�����
//̬������һ���ֻ���Ҳ��С��������һ���������㣬ÿһ�ֵĲ�ͬ������
//ʵ�ʳ��ֻ��ʸ�С
	    if( su1 == 1 && random(100) < 5 )//��ɫ������
	    {
	    message_vision(HIM"\nϦ�����գ�ĺɫ��������ӳ���ڴ�أ�"HIY"��Ʈ����"HIM"����������������������

              "HIW"----===�ԡ� �����ʽ ���===----
                   "NOR+YEL"  ��"HIY"�����߶�������׹"NOR+YEL"��\n\n"NOR,me);
	      for( j=0 ; j < i ; j++ )
	      {
	      k = random(3);
	        if(!enemy[j]) return ;
	        {
	          if( k > 0 )
	          {
	          message_vision(HIY"$N"HIY"������ʽ����������������ȫ�ķ�ס���ж�!!\n"NOR,enemy[j]);
	          enemy[j]->start_busy(k+1);
	          COMBAT_D->report_status(enemy[j]);
	          }else{
	          message_vision(HIW"$N"HIW"��׼�����ƣ�����ıܿ��������������������\n"NOR,enemy[j]);
	          COMBAT_D->report_status(enemy[j]);
	          }
	        }
	      }
	    }
	    if( su2 == 1 && random(100) < 5 )//��ɫ���ظ�
	    {
	    message_vision(HIM"\nľӰ�Դԣ�ɭȻ���У���ľ�����ڷ��У�"HIG"ľȼ�����"HIM"�и��ڴ�����΢�����ⷢ��

              "HIW"----===�ԡ� ľӰɭ��ʽ ���===----
                   "NOR+GRN"  ��"HIG"ľ����ݺ��������"NOR+GRN"��\n\n"NOR,me);
	    message_vision(HIG"�������ͷų��޴��������Ϣ��$N"HIG"�����������Ϣ����˵����������!!\n"NOR,me);
	    me->receive_curing("gin",500);
	    me->receive_heal("gin",500);
	    me->receive_curing("kee",1000);
	    me->receive_heal("kee",1000);
	    me->receive_curing("sen",500);
	    me->receive_heal("sen",500);
	    }
	    if( su3 == 1 && random(100) < 5 )//��ɫ��������Ϊ���úͽ�enforce
	    {
	    message_vision(HIM"ˮ�����ᣬ���ν��֣���Х�������ĺ���"HIC"ˮԨ������"HIM"��ͬ���ܿ��⽥��ĽȻʹ��

              "HIW"----===�ԡ� ˮϮ����ʽ ���===----
                   "NOR+CYN"  ��"HIC"ˮ��������Ժ�Х"NOR+CYN"��\n\n"NOR,me);
	      for( j=0 ; j < i ; j++ )
	      {
	      k = random(5);
	        if(!enemy[j]) return ;
	        {
	          if( k > 0 )
	          {
	          message_vision(HIC"$N"HIC"��ˮ����ס��Ѫ������ʹ������������ҲѸ����ʧ!!\n"NOR,enemy[j]);
	            if( enemy[j]->query("force") > 1000 )
	            {
	            enemy[j]->set("force",(int)(enemy[j]->query("force")-1000));
	            me->add("force",1000);
	            }else{
	            enemy[j]->set("force",0);
	            me->add("force",100);
	            }
	            if( enemy[j]->query("force_factor") > 2 )
	            {
	            enemy[j]->set("force_factor",(int)(enemy[j]->query("force_factor")/2));
	            }else{
	            enemy[j]->set("force_factor",0);
	            }
	          enemy[j]->apply_condition("cold",enemy[j]->query_condition("cold")+5);
	          COMBAT_D->report_status(enemy[j]);
	          }else{
	          message_vision(HIW"$N"HIW"��׼�����ƣ�����ıܿ��������������ˮ����\n"NOR,enemy[j]);
	          COMBAT_D->report_status(enemy[j]);
	          }
	        }
	      }
	    }
	    if( su4 == 1 && random(100) < 5 )//��ɫ����������
	    {
	    message_vision(HIM"������죬�Ƶ����ᣬ������������ʣ�"HIR"����ϻ���"HIM"���ид���Ȼ����ƮȻ����

              "HIW"----===�ԡ� ������ʽ ���===----
                   "NOR+RED"  ��"HIR"���Ʒ��裮����"NOR+RED"��\n\n"NOR,me);
	      for( j=0 ; j < i ; j++ )
	      {
	      k = random(7);
	        if(!enemy[j]) return ;
	        {
	          if( k > 0 )
	          {
	          message_vision(HIR"$N"HIR"��������Ļ����������\�ص����������ˣ������ԵĲ��Ʋ���!!\n"NOR,enemy[j]);
	          enemy[j]->receive_damage("kee",1000);
	          enemy[j]->receive_damage("gin",350);
	          enemy[j]->receive_damage("sen",350);
	          enemy[j]->apply_condition("burn",enemy[j]->query_condition("burn")+5);
	          COMBAT_D->report_status(enemy[j]);
	          }else{
	          message_vision(HIW"$N"HIW"���Ī��������ʹ�˿��ˣ�����Ļ���ֻ��$N"HIW"���������\n"NOR,enemy[j]);
	          COMBAT_D->report_status(enemy[j]);
	          }
	        }
	      }
	    }
	    if( su5 == 1 && random(100) < 5 )//��ɫ��������֮���ֵ
	    {
	    message_vision(HIM"�������У����춯�أ���ɨ������������"HIB"����������"HIM"������̾���һָ˲�����

              "HIW"----===�ԡ� ��������ʽ ���===----
                   "NOR+BLU"  ��"HIB"���ٻ�����������"NOR+BLU"��\n\n"NOR,me);
	      for( j=0 ; j < i ; j++ )
	      {
	      k = random(9);
	        if(!enemy[j]) return ;
	        {
	          if( k > 0 )
	          {
	          message_vision(HIB"$N"HIB"��������ǧ����ķ�ɳ��ʯ�εĻ������ˣ��Ե��Ǳ�����!!\n"NOR,enemy[j]);
	          enemy[j]->receive_wound("kee",1000);
	          enemy[j]->receive_wound("gin",350);
	          enemy[j]->receive_wound("sen",350);
	          COMBAT_D->report_status(enemy[j]);
	          }else{
	          message_vision(HIW"$N"HIW"���Ī��������ʹ�˿��ˣ�����ķ�ɳ��ʯֻ��$N"HIW"���������\n"NOR,enemy[j]);
	          COMBAT_D->report_status(enemy[j]);
	          }
	        }
	      }
	    }
	  }
	}

	return;
}

int query_autoload()
{
	return 1;
}
