// buy.c

inherit F_CLEAN_UP;

int help(object);

int main(object me, string arg)
{
  string item, targ;
  object ob, owner,*living;
  int price, afford, n,i;

  seteuid(getuid());
  if( !arg ) return help(me);
  if( sscanf(arg, "%s from %s", item, targ)!=2 )
  {
   item = arg;
   living=all_inventory(environment(me));
    for(i=0;i<sizeof(living);i++){
      if(living[i]->query("vendor_goods")){
        owner=living[i];
        break;
      }
    }
  if(!owner) return help(me);
  }
  else
  {
    targ = lower_case(targ);

    if( !objectp(owner = present(targ, environment(me))) ||
      userp(owner) || !living(owner))
    return notify_fail("ֻ�ܸ�����ҵ�'��'����!!\n");
  }
  return owner->sell_object(me, item);
}

int help(object me)
{
   write( @HELP
ָ���ʽ: buy [����] <����> from <����>
ָ��˵�� :
          ��һָ��������Դ�ĳЩ������������Ʒ��
          ����Ҫ����������ͬ�Ķ�����ʱ�򣬼ǵø�������
��    �� :
        buy torch from girl
        buy 100 bandage from vendor
��    �� :
	  ��������ͬ����벻Ҫ�� <����> buy <����> from <����>
	  ��Ϊ�������������ױ�ɻ�����, ��������������Ϊ <����> ��.
	  ����, �����ķ�ʽҲ�ǳ��� CPU, ��ǰ��˵���� <����> ��,
	  �ۺ�����˵��, �ڴ��ر������λ�ñ������ر��ṩ���﷨����.
HELP
   );
   return 1;
}
