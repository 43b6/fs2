// wield.c

inherit F_CLEAN_UP;

int do_wield(object me, object ob);

int main(object me, string arg)
{
  object ob, *inv;
  int i, count;
  if( !arg ) return notify_fail("��Ҫװ��ʲô������\n");
        arg = lower_case(arg);

  if(arg=="all") {
    inv = all_inventory(me);
    for(count=0, i=0; i<sizeof(inv); i++) {
      if( inv[i]->query("equipped") ) continue;
      if( inv[i]->query("id") == "fried chicken leg" && 
	  me->query("family") ) continue;
      if( do_wield(me, inv[i]) ) count ++;
    }
    write("Ok.\n");
    return 1;
  }

  if( !objectp(ob = present(arg, me)) )
    return notify_fail("������û������������\n");

  if( ob->query("equipped") )
    return notify_fail("���Ѿ�װ�����ˡ�\n");

  if( ob->query("id") == "fried chicken leg" && 
      me->query("family") )
    return notify_fail("���޷�װ������������\n");

  return do_wield(me, ob);
}

int do_wield(object me, object ob)
{
  string str;
  string *skill_type;
  int *skill_level;
  int con =ob->query("con");
  int cor =ob->query("cor");
  int cps =ob->query("cps");
  int kar =ob->query("kar");
  int int1 =ob->query("int");
  int per =ob->query("per");
  int spi =ob->query("spi");
  int str1 =ob->query("str");

  skill_type=allocate(5);
  skill_level=allocate(5);

  skill_type[0]= ob->query("ski_type1");
  skill_type[1]= ob->query("ski_type2");
  skill_type[2]= ob->query("ski_type3");
  skill_type[3]= ob->query("ski_type4");
  skill_type[4]= ob->query("ski_type5");
  skill_level[0]= ob->query("ski_level1");
  skill_level[1]= ob->query("ski_level2");
  skill_level[2]= ob->query("ski_level3");
  skill_level[3]= ob->query("ski_level4");
  skill_level[4]= ob->query("ski_level5");

  if ( skill_type[0]== 0 && skill_type[1] == 0 && skill_type[2] == 0 &&
       skill_type[3]== 0 && skill_type[4] == 0 &&
       int1 == 0 && kar==0 && cps==0 && con ==0 &&
       per  == 0 &&  spi ==0 && str1==0 && cor==0 )
  {
    if( ob->wield() ) {
      if( !stringp(str = ob->query("wield_msg")) )
        str = "$Nװ��$n��������\n";
      message_vision(str, me, ob);
      if( me->is_fighting() && userp(me) ) me->start_busy(1);
        return 1;
    }
    else
      return 0;
  }
  if ( me->query_skill(skill_type[1],1) < skill_level[1] ||
       me->query_skill(skill_type[2],1) < skill_level[2] ||
       me->query_skill(skill_type[3],1) < skill_level[3] ||
       me->query_skill(skill_type[4],1) < skill_level[4] ||
       me->query_skill(skill_type[0],1) < skill_level[0] ||
       me->query("cor") < cor ||
       me->query("con") < con ||
       me->query("cps") < cps ||
       me->query("int") < int1 ||
       me->query("kar") < kar ||
       me->query("per") < per ||
       me->query("spi") < spi ||
       me->query("str") < str1
     )
  {
    tell_object(me,"��ļ��ܻ����Բ�����ʹ����������\n" );
    return 1;
  }
  else {
    if ( ob->wield() ) {
      if ( !stringp(str = ob->query("wield_msg")) )
        str = "$Nװ��$n��������\n";
      message_vision(str, me, ob);
      if( me->is_fighting() && userp(me) ) me->start_busy(1);
        return 1;
    }
    else
      return 0;
        
  }
}



int help(object me)
{
  write(@HELP
ָ���ʽ : wield <װ������>
ָ��˵�� : 
           ���ָ������װ��ĳ����Ʒ��������
           �����Ҫӵ��������Ʒ��
HELP );
    return 1;
}
