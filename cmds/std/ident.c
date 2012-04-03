#include <weapon.h>
#include <armor.h>

inherit CHINESE_D;

int help(object);
int ident_weapon(object me,object ob,int lv);
int ident_armor(object me,object ob,int lv,int flag);
int ident_food(object me,object ob,int lv,int flag);
int ident_water(object me,object ob,int lv,int flag);
int ident_lighter(object me,object ob,int lv,int flag);
int ident_item(object me,object ob,int lv,int flag);

int main(object me, string arg)
{
  string type="item";
  object ob;
  int lv,cost;
  seteuid(getuid());
  if( !arg ) return help(me);
  if( me->is_fighting() ) return notify_fail("������ս���У�������Ʒ��\n");
  if(!(ob = present(arg,me))) return notify_fail("������û���������\n");
  for (lv=0;(lv*lv*lv*1000) <= me->query("combat_exp");lv++);
  lv=(lv > (me->query_skill("trade")/5))?(me->query_skill("trade")/5):lv;
  cost = (me->query("spi")-30) / 2;
  if (wizardp(me)){lv=20;cost=0;}
  me->add("sen",cost);
  write("��Ʒ��"+ob->name()+"    ������������ʴ�ԼΪ��\n");
  if (ob->limit_ident(me)) 
    return notify_fail("\n\n��ѽ������Ʒ�ƺ���ĳ�ַ�ӡ��ס�ˣ�����ô��Ҳ���������κ����ʣ�\n\n"); 
  if (ob->query("skill_type")) 
  {
    type = "weapon";
    ident_weapon(me,ob,lv);
  }
  if (ob->query("armor_type")) 
  {
    if (type=="item") ident_armor(me,ob,lv,1);
    else ident_armor(me,ob,lv,0);
    type = "armor";
  }
  if (ob->query("ʳ��")) 
  {
    if (type=="item") ident_food(me,ob,lv,1);
    else ident_food(me,ob,lv,0);
    type = "food";
  }
  if (ob->query("Һ��")) 
  {
    if (type=="item") ident_water(me,ob,lv,1);
    else ident_water(me,ob,lv,0);
    type = "water";
  }
  if (ob->query("light_up"))
  {
    if (type=="item") ident_lighter(me,ob,lv,1);
    else ident_lighter(me,ob,lv,0);
    type = "lighter";
  }
  if (type=="item") ident_item(me,ob,lv,1);
  ob->identify(me,lv);
  return 1;
}  
  
int ident_weapon(object me,object ob,int lv)
{
  int value,err;
  string gen;
  if (lv < 1)
  { 
    write("\nҲ����֪ʶ����ɣ����޷������κ����ʣ�\n");
    return 1;
  }
  switch(ob->query("skill_type"))
  {
    case("axe"):	write("��������");break;
    case("blade"):	write("��������");break;
    case("dagger"):	write("��������");break;
    case("hammer"):	write("�������");break;
    case("stabber"):	write("�̻�����");break;
    case("staff"):	write("��������");break;
    case("stick"):	write("��������");break;
    case("sword"):	write("��������");break;
    case("throwing"):	write("��������");break;
    case("unarmed"):	write("��������");break;
    case("whip"):	write("��������");break;
    default: write("��֪�ǲ������ʶ̫�٣�����ô��Ҳ����������ɶ������\n"+
                    "�����������ʦ������Ҳ���Ǹ���������⣡\n");
             return 1;break;
  }
  if (lv >= 2)
  {
    err=(ob->query("value") / 15);
    if (lv < 6) value=random(6+err*(6-lv)/2)-random(6+err*(6-lv));
    else value=0;
    value+=ob->query("value");
    if (value<0) value=0-value;
    write ("\t��ֵ��"+value);
    value=ob->query_weight()/100;
    write ("\t������"+(value/10)+"."+(value%10));
  }
  write("\n");
  if (lv >= 3)
  {
    err=(ob->query("weapon_prop/damage") / 15)+ 6;
    if(lv < 11) value=random(6+err*(11-lv)/2)-random(6+err*(11-lv));
    else value=0;
    value+=ob->query("weapon_prop/damage");
    if (value<0) value=0-value;
    write("�����˺�����"+value+"\t");
  }
  if (wizardp(me)&&value>120) write("����ǿ�ȳ����޶�����ر�������ʦ��顣\n"+
                                    " ("+(string)base_name(ob)+")\n");
  if (lv >= 4)
  {
    value=ob->query("flag");
    if(!value) write("���ʣ� ��");
    else
    {
      write("����: ");
      if(value & TWO_HANDED) 	write("˫�� ");
      if(value & SECONDARY)	write("������ ");
      if(value & EDGED)		write("������ ");
      if(value & POINTED)	write("������ ");
      if(value & LONG)		write("������ ");	
    }
  }
  write("\n");
  if (lv >= 5)
  { value=ob->query("need_exp");
    if(!value) write("����ֵ���ƣ� ��");
    else
    { 
      write("����ֵ����: "+chinese_number(value)+"��");
    }
  }
  write("\t\t");
  if (lv >= 5)
  { gen=ob->query("gender_only");
    if(!gen) write("�Ա����ƣ� ��");
    else
    { if (gen=="Ů��")
	  write("�Ա�����: Ů��");
	  else 
      write("�Ա�����: ����");
    }
  }
  write("\n");
  if (lv>=5)
  switch(ob->query("need_class"))
  {
    case("fighter"):	write("ְҵ���ƣ�����");break;
    case("swordsman"):	write("ְҵ���ƣ�����");break;
    case("blademan"):	write("ְҵ���ƣ�����");break;
    case("scholar"):	write("ְҵ���ƣ�����");break;
    case("taoist"):	write("ְҵ���ƣ���ʿ");break;
    case("dancer"):	write("ְҵ���ƣ�����");break;
    case("prayer"):	write("ְҵ���ƣ�ʥ���ͽ");break;
    case("poisoner"):	write("ְҵ���ƣ�ħ��ͽ");break;
    case("bandit"):	write("ְҵ���ƣ�����");break;
    case("marksman"):	write("ְҵ���ƣ�����");break;
//    case("whip"):	write("ְҵ���ƣ���������");break;
    default: write("ְҵ���ƣ���\n");
             break;
  }
  write("\n");
  if (lv >= 6)
  {
    if(ob->query("rigidity"))
    { 
      err=(ob->query("rigidity") / 15);
      if(lv < 13) value=random(6+err*(13-lv)/2)-random(6+err*(13-lv));
      else value=0;
      value+=ob->query("rigidity");
      if (value > ob->query("rigidity")/2) write("������������"+value+"\n");
    }
  }
  return 1;
}
int ident_armor(object me,object ob,int lv,int flag)
{
  int value,err,armor,i;
  mapping prop;
  string *skill,gen;
  if (lv < 1)
  { 
    write("\nҲ����֪ʶ����ɣ����޷������κ����ʣ�\n");
    return 1;
  }
  switch(ob->query("armor_type"))
  {
    case(TYPE_HEAD): 	write("�������ࣺͷ��");break;
    case(TYPE_NECK):	write("�������ࣺ����");break;
    case(TYPE_CLOTH):	write("�������ࣺ����");break;
    case(TYPE_ARMBANDS):write("�������ࣺ�ۻ�");break;
    case(TYPE_PANTS):	write("�������ࣺ�ּ�");break;
    case(TYPE_WAIST):	write("�������ࣺ����");break;
    case(TYPE_WRISTS):	write("�������ࣺ����");break;
    case(TYPE_SHIELD):	write("�������ࣺ����");break;
    case(TYPE_FINGER):	write("�������ࣺ��ָ");break;
    case(TYPE_HANDS):	write("�������ࣺ����");break;
    case(TYPE_BOOTS):	write("�������ࣺЬ��");break;
    case(TYPE_CAPE):	write("�������ࣺ����");break;
    case(TYPE_LEGGINGS):write("�������ࣺ��ϥ");break;
    default: write("��֣�����ô�����������ⶫ���ô����ģ�\n"+
                   "Ҳ��������ʦ�����ˡ�\n");
             return 1;break;
  }
  if (lv >= 2 && flag)
  {
    err=(ob->query("value") / 15);
    if (lv < 6) value=random(6+err*(6-lv)/2)-random(6+err*(6-lv));
    else value=0;
    value+=ob->query("value");
    if (value<0) value=0-value;
    write ("\t��ֵ��"+value);
    value=ob->query_weight()/100;
    write ("\t������"+(value/10)+"."+(value%10));
  }
  write("\n");
  if (lv >= 4)
  {
    armor=ob->query("armor_prop/armor");
    switch(ob->query("armor_type"))
    {
      case(TYPE_CLOTH):	armor=armor*3;break;
      case(TYPE_SHIELD):armor=armor*4;break;
      case(TYPE_HEAD):
      case(TYPE_PANTS):	armor=armor*6;break;
      case(TYPE_NECK):
      case(TYPE_ARMBANDS):
      case(TYPE_WAIST):
      case(TYPE_WRISTS):
      case(TYPE_FINGER):
      case(TYPE_HANDS):
      case(TYPE_BOOTS):
      case(TYPE_LEGGINGS):
      case(TYPE_CAPE):	armor=armor*12;break;
    }
    
    err=(armor / 15);
    if(lv < 11) value=random(6+err*(11-lv)/2)-random(6+err*(11-lv));
    else value=0;
    value+=armor;
//    if (value<0) value=0-value;
    switch(ob->query("armor_type"))
    {
      case(TYPE_HEAD): 	write("����ͷ�ϣ��ɼ�ǿͷ��"+value+"�������");break;
      case(TYPE_NECK):	write("���ڲ��ӣ��Ծ�������"+value+"�������");break;
      case(TYPE_CLOTH):	write("�������ϣ��ɱ�������"+value+"��");break;
      case(TYPE_ARMBANDS):write("�����ֱۣ��ɷ����ֱ�"+value+"��");break;
      case(TYPE_PANTS):	write("�������ϣ��ɲ����Ȳ�������"+value+"��");break;
      case(TYPE_WAIST):	write("ϵ�����ϣ��ɼ�ǿ����"+value+"�������");break;
      case(TYPE_WRISTS):write("װ���������������������"+value+"��");break;
      case(TYPE_SHIELD):write("�������ϣ����Ʒ�����������"+value+"��");break;
      case(TYPE_FINGER):write("������ָ����������ǿ"+value+"��");break;
      case(TYPE_HANDS):	write("�������ϣ��ֲ�������ǿ"+value+"��");break;
      case(TYPE_BOOTS):	write("װ����Ь�ӣ��Ų�����������"+value+"��");break;
      case(TYPE_CAPE):	write("���ڱ�������ǿ����"+value+"�������");break;
      case(TYPE_LEGGINGS):write("װ����ϥ��\����ǿ�Ų�����"+value+"��");break;
    }
  }
   write("\n");
  if (lv >= 5)
  { value=ob->query("need_exp");
    if(!value) write("����ֵ���ƣ� ��");
    else
    { 
      write("����ֵ����: "+chinese_number(value)+"��");
    }
  }
  write("\t\t");
  if (lv >= 5)
  { gen=ob->query("gender_only");
    if(!gen) write("�Ա����ƣ� ��");
    else
    { if (gen=="Ů��")
	  write("�Ա�����: Ů��");
	  else 
      write("�Ա�����: ����");
    }
  }
  write("\n");
  if (lv>=5)
  switch(ob->query("need_class"))
  {
    case("fighter"):	write("ְҵ���ƣ�����");break;
    case("swordsman"):	write("ְҵ���ƣ�����");break;
    case("blademan"):	write("ְҵ���ƣ�����");break;
    case("scholar"):	write("ְҵ���ƣ�����");break;
    case("taoist"):	write("ְҵ���ƣ���ʿ");break;
    case("dancer"):	write("ְҵ���ƣ�����");break;
    case("prayer"):	write("ְҵ���ƣ�ʥ���ͽ");break;
    case("poisoner"):	write("ְҵ���ƣ�ħ��ͽ");break;
    case("bandit"):	write("ְҵ���ƣ�����");break;
    case("marksman"):	write("ְҵ���ƣ�����");break;
//    case("whip"):	write("ְҵ���ƣ���������");break;
    default: write("ְҵ���ƣ���\n");
             break;
  }
  if(lv >= 3 && ob->query("rain_cover"))	write ("\n�߷��깦��");
  if(lv >= 6 && ob->query("thunder")) 	write ("\n�߱��׹���");
  write ("\n");  
  if(lv >= 5 && ob->query("armor_prop/armor_vs_force"))
  {
    err=(ob->query("armor_prop/armor_vs_force") / 15);
    if (lv < 10) value=random(6+err*(10-lv)/2)-random(6+err*(10-lv));
    else value=0;
    value+=ob->query("armor_prop/armor_vs_force");
    if (value<0) value=0-value;
    write("�ھ�����ЧӦ��"+value+"\n");
  }
  if (wizardp(me)&&value>60) write("����ǿ�ȳ����޶�����ر�������ʦ��顣\n"+
                                   " ("+(string)base_name(ob)+")\n");
  lv-=6;
  if (lv < 1) return 1;
  prop=ob->query("armor_prop");
  skill = keys(prop);
  for(i=0; i<sizeof(prop) && lv > 0; i++)
  {
    if (!(file_size("daemon/skill/"+skill[i]+".c") == -1))
    {
      printf("%-15s ����ЧӦ�� %d\n",
                to_chinese(skill[i]) + "(" + skill[i] + ")",prop[skill[i]]);
      lv--;
    }
  }
  return 1;
}
int ident_food(object me,object ob,int lv,int flag)
{
  int value,err;
  if(!lv)
    return notify_fail("�����ⶫ�����Գ�Ү��\n");
  if (lv >= 1 && flag)
  {
    err=(ob->query("value") / 15);
    if (lv < 6) value=random(6+err*(6-lv)/2)-random(6+err*(6-lv));
    else value=0;
    value+=ob->query("value");
    if (value<0) value=0-value;
    write ("\t��ֵ��"+value);
    value=ob->query_weight()/100;
    write ("\t������"+(value/10)+"."+(value%10));
  }
  write("\n");
  if((value=ob->query("ʳ��/ʣ")) < 1) 
    return notify_fail("�ţ����������Գԣ����Ǻ��񼺾����Թ��ˣ�\n");
  if (lv >= 3) write ("�ⶫ������������ܺó�Ү����ã�����"+
                      CHINESE_D->chinese_number(value)+"�ηݿ��Գԣ�\n");  
  if (lv >= 4) 
  {
    err=(ob->query("ʳ��/��Ӧ") / 15);
    if (lv < 7) value=random(6+err*(7-lv)/2)-random(6+err*(7-lv));
    else value=0;
    value+=ob->query("ʳ��/��Ӧ");
    if ( value < 0 ) value = 0 - value;
    write("���������Լ�����ṩ��һ��"+value+"��������\n");                  
                                                           
  }
  return 1;
}
int ident_water(object me,object ob,int lv,int flag)
{
  int value,err;
  if(!lv)
    return notify_fail("����������ร�\n");
  if (lv >= 1 && flag)
  {
    err=(ob->query("value") / 15);
    if (lv < 6) value=random(6+err*(6-lv)/2)-random(6+err*(6-lv));
    else value=0;
    value+=ob->query("value");
    if (value<0) value=0-value;
    write ("\t��ֵ��"+value);
    value=ob->query_weight()/100;
    write ("\t������"+(value/10)+"."+(value%10));
  }
  write("\n");
  if((value=ob->query("Һ��/ʣ")) < 1) 
    return notify_fail("�ţ��������Ǻȵģ����Ǻ��񼺾�û�ˣ�\n");
  value = (value+1)/2;
  if (lv >= 3) write ("������װ����"+(string)ob->query("Һ��/����")+
                      "����Ż���"+value+"����������\n");  
  if (lv >= 4) 
  {
    err=(ob->query("Һ��/ֹ��") / 15);
    if (lv < 7) value=random(6+err*(7-lv)/2)-random(6+err*(7-lv));
    else value=0;
    value+=ob->query("Һ��/ֹ��");
    if (value<0) value=0-value;
    write("�������Լ�����ṩ��һ��"+value+"����ˮ��\n");                  
  }
  return 1;
}

int ident_lighter(object me,object ob,int lv,int flag)
{
  int value,err;
  if(!lv) return notify_fail("���������ܡ�\n");
  if (lv >= 1 && flag)
  {
    err=(ob->query("value") / 15);
    if (lv < 6) value=random(6+err*(6-lv)/2)-random(6+err*(6-lv));
    else value=0;
    value+=ob->query("value");
    if (value<0) value=0-value;
    write ("\t��ֵ��"+value);
    value=ob->query_weight()/100;
    write ("\t������"+(value/10)+"."+(value%10));
  }
  write("\n");
  err=ob->query("light_up");
  if (lv >= 3 && err > 0)
  {
    err=err/15;
    if (lv < 8) value=random(6+err*(8-lv)/2)-random(6+err*(8-lv));
    else value=0;
    value+=ob->query("light_up");
    if (value<0) value=0-value;
    write ("�����������Ĺ��ã�����������Ż�������"+value+"����\n");
  }
  if (lv >= 5 && err < 0)
    if (lv >= 9 || random (9-lv) < 1) 
      write("�����������΢�⣬����������ܣ�\n");
      
  return 1;        
}

int ident_item(object me,object ob,int lv,int flag)
{
  int value,err;
  if (lv < 1)
  {
    write("\nҲ����֪ʶ����ɣ����޷������κ����ʣ�\n");
    return 1;
  }      
  err=(ob->query("value") / 15);
  if (lv < 6) value=random(6+err*(6-lv)/2)-random(6+err*(6-lv));
  else value=0;
  value+=ob->query("value");
  if (value<0) value=0-value;
  write ("\t��ֵ��"+value);
  value=ob->query_weight()/100;
  write ("\t������"+(value/10)+"."+(value%10)+"\n");
  return 1;
}  
int help(object me)
{
  write (@HELP
ָ���ʽ : ident [��Ʒ]
ָ��˵�� :
           ��ָ������������Ʒ�������Ĺ�����������
         ��������Ҫ�зḻ�Ľ��׾���֮�⣬���ü���ʶ
         �㡣�����ֻ�����ɱ�۸��ְ��ˣ����ܳ�Ϊһ
         �������ļ��ͼң�һ����Լ�����Ҫ�����൱��
         ���񣬵���ȷ�ܹ��õ���һ�㿴�����������Ѷ��
         ������Щ�����ǵþ���������Ż�������������
         �ģ�
HELP); 
  return 1;
}    
                                                                     
