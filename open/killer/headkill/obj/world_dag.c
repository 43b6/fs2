//87.10.11  �ĳ�ʹ��hit_ob�������ع���
//		���԰�heart_beat�õ���
#include <weapon.h>
#include <ansi.h>
inherit DAGGER;
object user=this_player();
void create()
{
        seteuid(getuid());
        set_name(HIR"��"+HIY"��"+HIG"ذ"+HIC"��"NOR,({"world"}));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else 
       {
 	set("unit", "��");
        	set("long","ذ���Ͽ�������֮ͼ�ڣ���֧ذ��ɢ�����ޱȵ�������\n");
                 	set("value",20000);
	set("material", "steel");
                	set("no_sell",1);
	set("no_auc",1);
	set("no_drop",1);
	set("no_steal",1);
	set("no_give",1);
        }
       set("wield_msg",HIR"$N������ذ���������ϣ�ȫ����������޵�������\n"NOR);
       set("unwield_msg",HIY"$N����һ����������$n�Ż����С���С�"NOR);
        init_dagger(95);
        setup();
}

mixed hit_ob( object victim,object me)
{
  object user;
  int a,b,c,i,bell,shalv,maglv,doglv,cor;
  int chiso,world_choice;

  user=this_player();
  bell  = user->query("bellicosity");
  shalv = user->query_skill("shadow-kill",1);
  maglv = user->query_skill("magic",1);
  doglv = user->query_skill("dodge",1);
   cor  = user->query("cor");

 if( user->is_fighting() && query("equipped") )
 {
   //����ħ��ɱ����Ҫ��60�����ϣ����л������������һ��һʽ
  //ĿǰҲֻд��һ����ʽ
  if (random(user->query("functions/manakee/level") ) > 60)
  {//��������ħ��ɱ����LV 100�Ļ�����������ԼΪ40��
   //���ǣ�һ�����Ŀǰ��඼û����LV 60
   //��Ϊ���⻹��������������������̫ǿ�������ڼ���һ������
   if(random(user->query_skill("rain-throwing",1)) >  80)
   {//��Ϊ��rain-throwing�ĵȼ����100������max���ʽ��� 0.4*0.2=0.08
     message_vision(HIR"\n            ��   "+HIG"��   "+HIY"��   "+ HIC"һ   "+HIW"!"NOR,victim);
     message_vision(HBMAG"\n                       ���ġ������������ߡ�\n"NOR,victim);
     message_vision(HBYEL"\nذ���дܳ�һ�������Ӱ����Χ$N��\n"NOR,victim);
     message_vision(HBCYN"\nذ���дܳ���ʮ���׻���Ӱ��ǣ��$N�Ĺ���\n"NOR,victim);
     message_vision(HBGRN"\n������ذ���ϳ����ֱ�ӳ���$N!!\n"NOR,victim);
     message_vision(HBRED"\n�޴�Ļ���ƮȻ���٣�$N���ܷ·����������ҵ��\n"NOR,victim);
     //�����
     chiso=random(cor+doglv);
     victim->add("gin",-chiso);
     victim->add("sen",-chiso);
     user->add("kee",chiso);
     //�׻���
     victim->start_busy(2);
     //������
     victim->add("gin",-((cor+maglv)*3));
     victim->add("sen",-((cor+maglv)*3));
     //��ȸ��
     victim->receive_damage("kee",random(shalv*2.8),user);
     //��������븶���Ĵ���
     user->add("bellicosity",-(user->query("bellicosity")/10));
     user->add("atman",-(user->query("atman")/3));
     user->add("force",-(user->query("force")/8));
     return ;
   }
  }
//�����һ�ڶ�ʽ�������������������Ӱذ�� lv 70,ħ��ɱlv 80
//��Ӱذ�����lv90��ħ��ɱ��func�Ҳ��������ͣ�һ��Ҫ�����������������
//manakeeĿǰ����������60����
//����ħ��ɱ�ڶ�������lv 100����Ӱذ�����lv 90����
//��߻����� (90-70)/90 * 0.2=0.22*0.2=0.044=4.4%�ķ�������
//����������踶���Ĵ��ۣ���Ϊ���������һ������һ��
//���ۣ�������1/8��ɱ����1/10��������1/3������˵�����Լ�������ȥ��ȡʤ��
//�˺��ǿ�������һλ������ÿһ����������ͬ
  if (random(user->query("functions/manakee/level") ) > 80)
  {//��������ħ��ɱ����LV 100�Ļ�����������ԼΪ20��
   //���ǣ�һ�����Ŀǰ��඼û����LV 50
   //��Ϊ���⻹��������������������̫ǿ�������ڼ���һ������
   if(random(user->query_skill("shadow-kill",1)) >  70)
   {
     message_vision(HIR"\n            ��   "+HIG"��   "+HIY"��   "+ HIC"һ   "+HIW"!"NOR,victim);
     message_vision(HBMAG"\n                       ���ġ��������ԡ�������\n"NOR,victim);
     world_choice=random(4);
     switch(world_choice)
     {
	case 0: //�������
	{
	  message_vision(HBYEL"\n�������x�y�z�{�|�}�~���~�}�|�{�z�x�������\n"NOR,victim);
     	  message_vision(HBYEL"\n����ư����񣬻����Ϊ�������������ס$N���ܣ�\n"NOR,victim);
	  message_vision(HBYEL"\n$N�е�ȫ��ľ����ƺ���������������ᣡ��\n"NOR,victim);
	  message_vision(HBYEL"\n���������$N�ص�����ذ�ף���е�ȫ����Ϊ֮һ�񣡣�\n"NOR,victim);
	  message_vision(HBYEL"\n������������������I�J�L�K����������\n"NOR,victim);	
          //����������˺�
	     chiso=random(cor+doglv);
	     victim->add("gin",-(chiso*3));
	     victim->add("sen",-(chiso*3));
	     user->add("gin",chiso*2);
	     user->add("sen",chiso*2);
	  break;
	}
	case 1://�׻�����
	{
   	  message_vision(HBCYN"\n�������x�y�z�{�|�}�~���~�}�|�{�z�x�������\n"NOR,victim);
	  message_vision(HBCYN"\n�׻��ư����񣬻����Ϊ�׻�������ǣ��$N�Ĺ���\n"NOR,victim);
	  message_vision(HBCYN"\n$N�Ĺ���Ϊ֮һ�ͣ��ƺ�ʩչ������������\n"NOR,victim);
          message_vision(HBCYN"\n$NǿӲ��\�Ѱ׻������Ŀ��ƣ������ܵ����صĴ���\n"NOR,victim);
	  message_vision(HBCYN"\n������������������I�J�L�K����������\n"NOR,victim);
          //�׻��������˺�
   	  victim->start_busy(2);
	  victim->add("kee",-(cor*3));
          break;
        }
	case 2://��������
	{
	  message_vision(HBGRN"\n�������x�y�z�{�|�}�~���~�}�|�{�z�x�������\n"NOR,victim);
          message_vision(HBGRN"\n�����ư����񣬻����Ϊ��������������$N��͸�����!!\n"NOR,victim);
	  message_vision(HBGRN"\n$N�е�һ����ɽ������ѹ��ӭ���������������ĩ��һ�㣡\n"NOR,victim);
          message_vision(HBGRN"\n����������ǿ����������$N�����ܵ����ش��!\n"NOR,victim);
	  message_vision(HBGRN"\n������������������I�J�L�K����������\n"NOR,victim);	
          //�����������˺�
	  victim->add("gin",-random((cor+maglv)*5));
	  victim->add("sen",-random((cor+maglv)*5));
          break;
        }
	case 3://��ȸ����
	{
	  message_vision(HBRED"\n�������x�y�z�{�|�}�~���~�}�|�{�z�x�������\n"NOR,victim);
	  message_vision(HBRED"\n��ȸ�ư����񣬻����Ϊ��ȸ����������֮���ˣ�$N����\n"NOR,victim);
	  message_vision(HBRED"\n$N�������������ҵ�����ܵ��һ�������\n"NOR,victim);
          message_vision(HBRED"\n�������ҵ����$N�������ܵ�ȼ���ţ���������\n"NOR,victim);
	  message_vision(HBRED"\n����ʹ��ĸо���$N�е����ϵ�һ���ƺ��Ѳ��������Լ�������\n"NOR,victim);
	  message_vision(HBRED"\n������������������I�J�L�K����������\n"NOR,victim);	
          //��ȸ�������˺�
	  victim->receive_damage("kee",random(shalv*5),user);
          break;
        }
     }  //switch block����Χ����case�����break������������
     //��������븶���Ĵ���
     user->add("bellicosity",-(user->query("bellicosity")/15));
     user->add("atman",-(user->query("atman")/3));
     user->add("force",-(user->query("force")/10));
     return ;
   }
  }
   
  //���������������һ���ع��׶�
  if(random(100) > 80)   //�������ع�����ϵ��������  30�������ɹ�
  {
   message_vision(HBYEL"\n�ɾ���ذ���дܳ�һ�������Ӱ����Χ$N��\n"NOR,victim);
   message_vision(HBYEL"\n�޴�������Ӱ����$N���ɣ�\n"NOR,victim);
   message_vision(HIM"$n��$N�������Ӱ����Ϯ,������ʧ��$N������"NOR"\n",user,victim);
//����������Խ�ã������еģ�Խ��
   chiso=random((cor*2)+(doglv/2));
   victim->add("gin",-chiso);
   victim->add("sen",-chiso);
   user->add("kee",chiso);
   user->add("gin",chiso);
   user->add("sen",chiso);
   COMBAT_D->report_status(victim);
   //��ֹ����������
   if(user->query("sen") > user->query("max_sen"))
   {
    a=user->query("max_sen");
    user->set("sen",a);
   }
   if(user->query("gin") > user->query("max_gin"))
   {
    b=user->query("max_gin");
    user->set("gin",b);
   }
   if(user->query("kee") > user->query("max_kee"))
   {
    c=user->query("max_kee");
    user->set("kee",c);
   }
   return ;          //��Ϊ�Ѿ�������һ����Բ������ڷ��������ع�	
  }//�����������ع��ķ����趨 

  if(random(100) > 80)  //�°׻��ع�����ϵ��ǣ���� 30%�����ɹ�
  {
     message_vision(HBCYN"\n�ɾ���ذ���дܳ���ʮ���׻���Ӱ��ǣ��$N�Ĺ���\n"NOR,victim);
     message_vision(HBCYN"�׻���Ӱ������$N�����ߣ���ʹ����Ϊ֮һ��\n"NOR,victim);
     if (doglv > victim->query_skill("dodge",1))
      	victim->start_busy(2);
     else 
      	victim->start_busy(1);
      message_vision(HIC"$N�ܵ��׻���Ӱ��ǣ�ƣ����޷��ж�\n"NOR,victim);
     return ;
  }//�����ǰ׻��ع��ķ����趨

  if(random(100) > 80)  //�������ع�����ϵ�������˺�ϵ 30%�����ɹ�
  {
     message_vision(HBGRN"\n������ذ���ϳ����ֱ�ӳ���$N!!\n"NOR,victim);
     message_vision(HBGRN"������Ӱ�����������$N�ľ����������ǿ���˺�!!\n"NOR,victim);	
     if( bell > 4000)
     {//�������ǿ���ɱ�������ԶԾ�������ɸ�����˺�
	victim->add("gin",-(cor*5));
	victim->add("sen",-(cor*5));
	message_vision(HBGRN"$N�������ܵ��ǳ����صĴ���!!\n"NOR,victim);	
        return ;
     }
     if( bell > 2000)
     {//�������ǿ���ɱ�������ԶԾ�������ɸ�����˺�
	victim->add("gin",-(cor*4));
	victim->add("sen",-(cor*4));
	message_vision(HBGRN"$N�������ܵ����صĴ���!!\n"NOR,victim);	
        return ;
     }
     if( bell > 1000)
     {//�������ǿ���ɱ�������ԶԾ�������ɸ�����˺�
	victim->add("gin",-(cor*3));
	victim->add("sen",-(cor*3));
	message_vision(HBGRN"$N�������ܵ���ͨ�Ĵ���!!\n"NOR,victim);	
        return ;
     }		
     if( bell > 100)
     {//�������ǿ���ɱ�������ԶԾ�������ɸ�����˺�
	victim->add("gin",-(cor*2));
	victim->add("sen",-(cor*2));
	message_vision(HBGRN"$N�������ܵ���΢�Ĵ���!!\n"NOR,victim);	
        return ;
     }
     return ;
  }//�����������ķ����趨

  if(random(100) > 70)  //����ȸ�ع�����ϵ�������˺��� 40%�����ɹ�
  {
      if (shalv >80)
      {//��Ӱذ��Խǿ������Խ��LV���90��������� 252���˺�
	message_vision(HBRED"\n�޴�Ļ���ƮȻ���٣�$N���ܷ·����������ҵ��\n"NOR,victim);
	message_vision(HBRED"$N��������ҵ�����ƣ������⵽�ǳ����ص��˺�\n"NOR,victim);
                  victim->receive_damage("kee",random(shalv*2.8),user);
	COMBAT_D->report_status(victim);
	return ;
      }
      if (shalv >60)
      {//��Ӱذ��Խǿ������Խ��
	message_vision(HBRED"\n$N�������������ҵ�����ܵ��һ����ܰ�Χ\n"NOR,victim);
	message_vision(HBRED"���һ��д���$N�����İ��������������⵽���صĴ���\n"NOR,victim);
        victim->receive_damage("kee",random(shalv*2.2),user);
	COMBAT_D->report_status(victim);
	return ;
      }
      if (shalv >40)
      {//��Ӱذ��Խǿ������Խ��
	message_vision(HBRED"\n��ȸ������������һ���$N����ȼ����\n"NOR,victim);
	message_vision(HBRED"$Nһ��С�ı��һ����ˣ������ܵ���������\n"NOR,victim);
        victim->receive_damage("kee",random(shalv*1.6),user);
	COMBAT_D->report_status(victim);
	return ;
      }
      if (shalv > 1)
      {//��Ӱذ��Խǿ������Խ��
	message_vision(HBRED"\n����ذ�׷������۵Ļ�⣬��$N�۾��ܵ��˺�\n"NOR,victim);
	message_vision(HBRED"$N����Ϊ֮һ�ͣ����۾�Ҳ�ܵ��˺��ˡ�\n"NOR,victim);
                 victim->receive_damage("kee",random(shalv),user);
      	victim->start_busy(1);
	COMBAT_D->report_status(victim);
	return ;
      }
      if (shalv <= 1)
      {//���ǵ�Ŀǰworld�ǿ��ŵģ����ԣ���Щ����û��shadow-kill
	message_vision(HBRED"\n����ذ�׷������۵Ļ�⣬��$N�۾��ܵ��˺�\n"NOR,victim);
	message_vision(HBRED"$N����Ϊ֮һ�͡�\n"NOR,victim);
      	victim->start_busy(1);
	COMBAT_D->report_status(victim);
	return ;
      }
   } //��������ȸ�ķ����趨
  //������ʧ��
	tell_object(user,"\n��������޶���!!\n");
  
	return;
 } //���Ǽ����ûҲ��ս���е���һ��if��block
}  //��ʾ������block
