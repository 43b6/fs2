// equip.c
// ������߻������ļ�ֵby bss
// ��ֵ������eq�ĸ�������ֵ���ı�
inherit ITEM;
inherit F_EQUIP;

void setup()
{
    int value,i,cnt,total;
    string *name;
    mapping in_data=([ ]);

    value=query("value");
    set("old_value",value);
    if(query("skill_type")){ // is weapon
      if(query("weapon_prop/damage")){
        if(query("weapon_prop/damage")/20 > 0){
          if(!value) value=1000;
          value*=(query("weapon_prop/damage") / 20);
        }
      }
      name=keys(query("weapon_prop"));
      total=0;
      for(i=0;i<sizeof(name);i++){
        if(name[i]=="damage") continue;
        if(intp(query("weapon_prop/"+name[i]))){
          total+=query("weapon_prop/"+name[i]);
        }
      }
      if((int)(total) > 1 && !value) value=1000;
       if( total > 25) total=25;
      if(total >0)
       value+=(int)(value*total/25);
    }
    else if(query("armor_type")){ //is armor
      if(query("armor_prop/armor")){
        if(query("armor_prop/armor")/20 > 0){
          if(!value) value=1000;
          value*=(query("armor_prop/armor")/20);
        }
      }
      name=keys(query("armor_prop"));
      total=0;
      for(i=0;i<sizeof(name);i++){
        if(name[i]=="armor"){
          if(query("armor_prop/armor") <20)
            total+=query("armor_prop/armor");
        }
        else
        if(intp(query("armor_prop/"+name[i]))){
          total+=query("armor_prop/"+name[i]);
        }
      }
      if((int)(total) > 1 && !value) value=1000;
       if( total > 25) total=25;
      if(total >0)
      value+=(int)(value*total/25);
    }  
    set("value",value);
}

int query_autoload()
{
  return query("autoload");
}
