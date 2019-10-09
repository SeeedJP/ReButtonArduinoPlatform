// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

/*THIS FILE IS GENERATED*/
/*DO NOT EDIT BY HAND!!!*/
/*instead edit macro_utils.tt here: http://www.github.com/azure/azure-macro-utils-c.git */
/*and then propagate the generated file to all the repos*/
/* !!! CAUTION!!! This file is copied to multiple places */
/* in https://github.com/Azure/azure-c-shared-utility.git, */
/* and all of these copies must be located and replaced. */



#ifndef MACRO_UTILS_H
#define MACRO_UTILS_H

#ifdef __cplusplus
#include <cstring>
#include <cstddef>
extern "C" {
#else
#include <string.h>
#include <stddef.h>
#endif

#if (defined OPTIMIZE_RETURN_CODES)
    #define MU_FAILURE 1
#else
    #define MU_FAILURE __LINE__
#endif

/*"pointer or NULL" macro - because when printf-ing arguments NULL is not valid for %s (section 7.1.4 of C11 standard) */
#define MU_P_OR_NULL(p) (((p)!=NULL)?(p):"NULL")
#define MU_WP_OR_NULL(p) (((p)!=NULL)?(p):L"NULL")

#define MU_TOSTRING_(x) #x
#define MU_TOSTRING(x) MU_TOSTRING_(x)

#define MU_IFCOMMA(N) MU_C2(MU_IFCOMMA_, N)
#define MU_IFCOMMA_0
#define MU_IFCOMMA_2
#define MU_IFCOMMA_4 ,
#define MU_IFCOMMA_6 ,
#define MU_IFCOMMA_8 ,
#define MU_IFCOMMA_10 ,
#define MU_IFCOMMA_12 ,
#define MU_IFCOMMA_14 ,
#define MU_IFCOMMA_16 ,
#define MU_IFCOMMA_18 ,
#define MU_IFCOMMA_20 ,
#define MU_IFCOMMA_22 ,
#define MU_IFCOMMA_24 ,
#define MU_IFCOMMA_26 ,
#define MU_IFCOMMA_28 ,
#define MU_IFCOMMA_30 ,
#define MU_IFCOMMA_32 ,
#define MU_IFCOMMA_34 ,
#define MU_IFCOMMA_36 ,
#define MU_IFCOMMA_38 ,
#define MU_IFCOMMA_40 ,
#define MU_IFCOMMA_42 ,
#define MU_IFCOMMA_44 ,
#define MU_IFCOMMA_46 ,
#define MU_IFCOMMA_48 ,
#define MU_IFCOMMA_50 ,
#define MU_IFCOMMA_52 ,
#define MU_IFCOMMA_54 ,
#define MU_IFCOMMA_56 ,
#define MU_IFCOMMA_58 ,
#define MU_IFCOMMA_60 ,
#define MU_IFCOMMA_62 ,
#define MU_IFCOMMA_64 ,
#define MU_IFCOMMA_66 ,
#define MU_IFCOMMA_68 ,
#define MU_IFCOMMA_70 ,
#define MU_IFCOMMA_72 ,
#define MU_IFCOMMA_74 ,
#define MU_IFCOMMA_76 ,
#define MU_IFCOMMA_78 ,
#define MU_IFCOMMA_80 ,
#define MU_IFCOMMA_82 ,
#define MU_IFCOMMA_84 ,
#define MU_IFCOMMA_86 ,
#define MU_IFCOMMA_88 ,
#define MU_IFCOMMA_90 ,
#define MU_IFCOMMA_92 ,
#define MU_IFCOMMA_94 ,
#define MU_IFCOMMA_96 ,
#define MU_IFCOMMA_98 ,
#define MU_IFCOMMA_100 ,
#define MU_IFCOMMA_102 ,
#define MU_IFCOMMA_104 ,
#define MU_IFCOMMA_106 ,
#define MU_IFCOMMA_108 ,
#define MU_IFCOMMA_110 ,
#define MU_IFCOMMA_112 ,
#define MU_IFCOMMA_114 ,
#define MU_IFCOMMA_116 ,
#define MU_IFCOMMA_118 ,
#define MU_IFCOMMA_120 ,
#define MU_IFCOMMA_122 ,
#define MU_IFCOMMA_124 ,

#define MU_IFCOMMALOGIC(N) MU_C2(MU_IFCOMMALOGIC_, N)
#define MU_IFCOMMALOGIC_0 
#define MU_IFCOMMALOGIC_1 ,
#define MU_IFCOMMALOGIC_2 ,
#define MU_IFCOMMALOGIC_3 ,
#define MU_IFCOMMALOGIC_4 ,
#define MU_IFCOMMALOGIC_5 ,
#define MU_IFCOMMALOGIC_6 ,
#define MU_IFCOMMALOGIC_7 ,
#define MU_IFCOMMALOGIC_8 ,
#define MU_IFCOMMALOGIC_9 ,
#define MU_IFCOMMALOGIC_10 ,
#define MU_IFCOMMALOGIC_11 ,
#define MU_IFCOMMALOGIC_12 ,
#define MU_IFCOMMALOGIC_13 ,
#define MU_IFCOMMALOGIC_14 ,
#define MU_IFCOMMALOGIC_15 ,
#define MU_IFCOMMALOGIC_16 ,
#define MU_IFCOMMALOGIC_17 ,
#define MU_IFCOMMALOGIC_18 ,
#define MU_IFCOMMALOGIC_19 ,
#define MU_IFCOMMALOGIC_20 ,
#define MU_IFCOMMALOGIC_21 ,
#define MU_IFCOMMALOGIC_22 ,
#define MU_IFCOMMALOGIC_23 ,
#define MU_IFCOMMALOGIC_24 ,
#define MU_IFCOMMALOGIC_25 ,
#define MU_IFCOMMALOGIC_26 ,
#define MU_IFCOMMALOGIC_27 ,
#define MU_IFCOMMALOGIC_28 ,
#define MU_IFCOMMALOGIC_29 ,
#define MU_IFCOMMALOGIC_30 ,
#define MU_IFCOMMALOGIC_31 ,
#define MU_IFCOMMALOGIC_32 ,
#define MU_IFCOMMALOGIC_33 ,
#define MU_IFCOMMALOGIC_34 ,
#define MU_IFCOMMALOGIC_35 ,
#define MU_IFCOMMALOGIC_36 ,
#define MU_IFCOMMALOGIC_37 ,
#define MU_IFCOMMALOGIC_38 ,
#define MU_IFCOMMALOGIC_39 ,
#define MU_IFCOMMALOGIC_40 ,
#define MU_IFCOMMALOGIC_41 ,
#define MU_IFCOMMALOGIC_42 ,
#define MU_IFCOMMALOGIC_43 ,
#define MU_IFCOMMALOGIC_44 ,
#define MU_IFCOMMALOGIC_45 ,
#define MU_IFCOMMALOGIC_46 ,
#define MU_IFCOMMALOGIC_47 ,
#define MU_IFCOMMALOGIC_48 ,
#define MU_IFCOMMALOGIC_49 ,
#define MU_IFCOMMALOGIC_50 ,
#define MU_IFCOMMALOGIC_51 ,
#define MU_IFCOMMALOGIC_52 ,
#define MU_IFCOMMALOGIC_53 ,
#define MU_IFCOMMALOGIC_54 ,
#define MU_IFCOMMALOGIC_55 ,
#define MU_IFCOMMALOGIC_56 ,
#define MU_IFCOMMALOGIC_57 ,
#define MU_IFCOMMALOGIC_58 ,
#define MU_IFCOMMALOGIC_59 ,
#define MU_IFCOMMALOGIC_60 ,
#define MU_IFCOMMALOGIC_61 ,
#define MU_IFCOMMALOGIC_62 ,
#define MU_IFCOMMALOGIC_63 ,
#define MU_IFCOMMALOGIC_64 ,
#define MU_IFCOMMALOGIC_65 ,
#define MU_IFCOMMALOGIC_66 ,
#define MU_IFCOMMALOGIC_67 ,
#define MU_IFCOMMALOGIC_68 ,
#define MU_IFCOMMALOGIC_69 ,
#define MU_IFCOMMALOGIC_70 ,
#define MU_IFCOMMALOGIC_71 ,
#define MU_IFCOMMALOGIC_72 ,
#define MU_IFCOMMALOGIC_73 ,
#define MU_IFCOMMALOGIC_74 ,
#define MU_IFCOMMALOGIC_75 ,
#define MU_IFCOMMALOGIC_76 ,
#define MU_IFCOMMALOGIC_77 ,
#define MU_IFCOMMALOGIC_78 ,
#define MU_IFCOMMALOGIC_79 ,
#define MU_IFCOMMALOGIC_80 ,
#define MU_IFCOMMALOGIC_81 ,
#define MU_IFCOMMALOGIC_82 ,
#define MU_IFCOMMALOGIC_83 ,
#define MU_IFCOMMALOGIC_84 ,
#define MU_IFCOMMALOGIC_85 ,
#define MU_IFCOMMALOGIC_86 ,
#define MU_IFCOMMALOGIC_87 ,
#define MU_IFCOMMALOGIC_88 ,
#define MU_IFCOMMALOGIC_89 ,
#define MU_IFCOMMALOGIC_90 ,
#define MU_IFCOMMALOGIC_91 ,
#define MU_IFCOMMALOGIC_92 ,
#define MU_IFCOMMALOGIC_93 ,
#define MU_IFCOMMALOGIC_94 ,
#define MU_IFCOMMALOGIC_95 ,
#define MU_IFCOMMALOGIC_96 ,
#define MU_IFCOMMALOGIC_97 ,
#define MU_IFCOMMALOGIC_98 ,
#define MU_IFCOMMALOGIC_99 ,
#define MU_IFCOMMALOGIC_100 ,
#define MU_IFCOMMALOGIC_101 ,
#define MU_IFCOMMALOGIC_102 ,
#define MU_IFCOMMALOGIC_103 ,
#define MU_IFCOMMALOGIC_104 ,
#define MU_IFCOMMALOGIC_105 ,
#define MU_IFCOMMALOGIC_106 ,
#define MU_IFCOMMALOGIC_107 ,
#define MU_IFCOMMALOGIC_108 ,
#define MU_IFCOMMALOGIC_109 ,
#define MU_IFCOMMALOGIC_110 ,
#define MU_IFCOMMALOGIC_111 ,
#define MU_IFCOMMALOGIC_112 ,
#define MU_IFCOMMALOGIC_113 ,
#define MU_IFCOMMALOGIC_114 ,
#define MU_IFCOMMALOGIC_115 ,
#define MU_IFCOMMALOGIC_116 ,
#define MU_IFCOMMALOGIC_117 ,
#define MU_IFCOMMALOGIC_118 ,
#define MU_IFCOMMALOGIC_119 ,
#define MU_IFCOMMALOGIC_120 ,
#define MU_IFCOMMALOGIC_121 ,
#define MU_IFCOMMALOGIC_122 ,
#define MU_IFCOMMALOGIC_123 ,
#define MU_IFCOMMALOGIC_124 ,

#define MU_IFCOMMA_NOFIRST(N) MU_C2(MU_IFCOMMA_NOFIRST, N)
#define MU_IFCOMMA_NOFIRST1 
#define MU_IFCOMMA_NOFIRST2 ,
#define MU_IFCOMMA_NOFIRST3 ,
#define MU_IFCOMMA_NOFIRST4 ,
#define MU_IFCOMMA_NOFIRST5 ,
#define MU_IFCOMMA_NOFIRST6 ,
#define MU_IFCOMMA_NOFIRST7 ,
#define MU_IFCOMMA_NOFIRST8 ,
#define MU_IFCOMMA_NOFIRST9 ,
#define MU_IFCOMMA_NOFIRST10 ,
#define MU_IFCOMMA_NOFIRST11 ,
#define MU_IFCOMMA_NOFIRST12 ,
#define MU_IFCOMMA_NOFIRST13 ,
#define MU_IFCOMMA_NOFIRST14 ,
#define MU_IFCOMMA_NOFIRST15 ,
#define MU_IFCOMMA_NOFIRST16 ,
#define MU_IFCOMMA_NOFIRST17 ,
#define MU_IFCOMMA_NOFIRST18 ,
#define MU_IFCOMMA_NOFIRST19 ,
#define MU_IFCOMMA_NOFIRST20 ,
#define MU_IFCOMMA_NOFIRST21 ,
#define MU_IFCOMMA_NOFIRST22 ,
#define MU_IFCOMMA_NOFIRST23 ,
#define MU_IFCOMMA_NOFIRST24 ,
#define MU_IFCOMMA_NOFIRST25 ,
#define MU_IFCOMMA_NOFIRST26 ,
#define MU_IFCOMMA_NOFIRST27 ,
#define MU_IFCOMMA_NOFIRST28 ,
#define MU_IFCOMMA_NOFIRST29 ,
#define MU_IFCOMMA_NOFIRST30 ,
#define MU_IFCOMMA_NOFIRST31 ,
#define MU_IFCOMMA_NOFIRST32 ,
#define MU_IFCOMMA_NOFIRST33 ,
#define MU_IFCOMMA_NOFIRST34 ,
#define MU_IFCOMMA_NOFIRST35 ,
#define MU_IFCOMMA_NOFIRST36 ,
#define MU_IFCOMMA_NOFIRST37 ,
#define MU_IFCOMMA_NOFIRST38 ,
#define MU_IFCOMMA_NOFIRST39 ,
#define MU_IFCOMMA_NOFIRST40 ,
#define MU_IFCOMMA_NOFIRST41 ,
#define MU_IFCOMMA_NOFIRST42 ,
#define MU_IFCOMMA_NOFIRST43 ,
#define MU_IFCOMMA_NOFIRST44 ,
#define MU_IFCOMMA_NOFIRST45 ,
#define MU_IFCOMMA_NOFIRST46 ,
#define MU_IFCOMMA_NOFIRST47 ,
#define MU_IFCOMMA_NOFIRST48 ,
#define MU_IFCOMMA_NOFIRST49 ,
#define MU_IFCOMMA_NOFIRST50 ,
#define MU_IFCOMMA_NOFIRST51 ,
#define MU_IFCOMMA_NOFIRST52 ,
#define MU_IFCOMMA_NOFIRST53 ,
#define MU_IFCOMMA_NOFIRST54 ,
#define MU_IFCOMMA_NOFIRST55 ,
#define MU_IFCOMMA_NOFIRST56 ,
#define MU_IFCOMMA_NOFIRST57 ,
#define MU_IFCOMMA_NOFIRST58 ,
#define MU_IFCOMMA_NOFIRST59 ,
#define MU_IFCOMMA_NOFIRST60 ,
#define MU_IFCOMMA_NOFIRST61 ,
#define MU_IFCOMMA_NOFIRST62 ,
#define MU_IFCOMMA_NOFIRST63 ,
#define MU_IFCOMMA_NOFIRST64 ,
#define MU_IFCOMMA_NOFIRST65 ,
#define MU_IFCOMMA_NOFIRST66 ,
#define MU_IFCOMMA_NOFIRST67 ,
#define MU_IFCOMMA_NOFIRST68 ,
#define MU_IFCOMMA_NOFIRST69 ,
#define MU_IFCOMMA_NOFIRST70 ,
#define MU_IFCOMMA_NOFIRST71 ,
#define MU_IFCOMMA_NOFIRST72 ,
#define MU_IFCOMMA_NOFIRST73 ,
#define MU_IFCOMMA_NOFIRST74 ,
#define MU_IFCOMMA_NOFIRST75 ,
#define MU_IFCOMMA_NOFIRST76 ,
#define MU_IFCOMMA_NOFIRST77 ,
#define MU_IFCOMMA_NOFIRST78 ,
#define MU_IFCOMMA_NOFIRST79 ,
#define MU_IFCOMMA_NOFIRST80 ,
#define MU_IFCOMMA_NOFIRST81 ,
#define MU_IFCOMMA_NOFIRST82 ,
#define MU_IFCOMMA_NOFIRST83 ,
#define MU_IFCOMMA_NOFIRST84 ,
#define MU_IFCOMMA_NOFIRST85 ,
#define MU_IFCOMMA_NOFIRST86 ,
#define MU_IFCOMMA_NOFIRST87 ,
#define MU_IFCOMMA_NOFIRST88 ,
#define MU_IFCOMMA_NOFIRST89 ,
#define MU_IFCOMMA_NOFIRST90 ,
#define MU_IFCOMMA_NOFIRST91 ,
#define MU_IFCOMMA_NOFIRST92 ,
#define MU_IFCOMMA_NOFIRST93 ,
#define MU_IFCOMMA_NOFIRST94 ,
#define MU_IFCOMMA_NOFIRST95 ,
#define MU_IFCOMMA_NOFIRST96 ,
#define MU_IFCOMMA_NOFIRST97 ,
#define MU_IFCOMMA_NOFIRST98 ,
#define MU_IFCOMMA_NOFIRST99 ,
#define MU_IFCOMMA_NOFIRST100 ,
#define MU_IFCOMMA_NOFIRST101 ,
#define MU_IFCOMMA_NOFIRST102 ,
#define MU_IFCOMMA_NOFIRST103 ,
#define MU_IFCOMMA_NOFIRST104 ,
#define MU_IFCOMMA_NOFIRST105 ,
#define MU_IFCOMMA_NOFIRST106 ,
#define MU_IFCOMMA_NOFIRST107 ,
#define MU_IFCOMMA_NOFIRST108 ,
#define MU_IFCOMMA_NOFIRST109 ,
#define MU_IFCOMMA_NOFIRST110 ,
#define MU_IFCOMMA_NOFIRST111 ,
#define MU_IFCOMMA_NOFIRST112 ,
#define MU_IFCOMMA_NOFIRST113 ,
#define MU_IFCOMMA_NOFIRST114 ,
#define MU_IFCOMMA_NOFIRST115 ,
#define MU_IFCOMMA_NOFIRST116 ,
#define MU_IFCOMMA_NOFIRST117 ,
#define MU_IFCOMMA_NOFIRST118 ,
#define MU_IFCOMMA_NOFIRST119 ,
#define MU_IFCOMMA_NOFIRST120 ,
#define MU_IFCOMMA_NOFIRST121 ,
#define MU_IFCOMMA_NOFIRST122 ,
#define MU_IFCOMMA_NOFIRST123 ,
#define MU_IFCOMMA_NOFIRST124 ,

#define MU_DEC(x) MU_C2(MU_DEC,x)
#define MU_DEC1024 1023
#define MU_DEC1023 1022
#define MU_DEC1022 1021
#define MU_DEC1021 1020
#define MU_DEC1020 1019
#define MU_DEC1019 1018
#define MU_DEC1018 1017
#define MU_DEC1017 1016
#define MU_DEC1016 1015
#define MU_DEC1015 1014
#define MU_DEC1014 1013
#define MU_DEC1013 1012
#define MU_DEC1012 1011
#define MU_DEC1011 1010
#define MU_DEC1010 1009
#define MU_DEC1009 1008
#define MU_DEC1008 1007
#define MU_DEC1007 1006
#define MU_DEC1006 1005
#define MU_DEC1005 1004
#define MU_DEC1004 1003
#define MU_DEC1003 1002
#define MU_DEC1002 1001
#define MU_DEC1001 1000
#define MU_DEC1000 999
#define MU_DEC999 998
#define MU_DEC998 997
#define MU_DEC997 996
#define MU_DEC996 995
#define MU_DEC995 994
#define MU_DEC994 993
#define MU_DEC993 992
#define MU_DEC992 991
#define MU_DEC991 990
#define MU_DEC990 989
#define MU_DEC989 988
#define MU_DEC988 987
#define MU_DEC987 986
#define MU_DEC986 985
#define MU_DEC985 984
#define MU_DEC984 983
#define MU_DEC983 982
#define MU_DEC982 981
#define MU_DEC981 980
#define MU_DEC980 979
#define MU_DEC979 978
#define MU_DEC978 977
#define MU_DEC977 976
#define MU_DEC976 975
#define MU_DEC975 974
#define MU_DEC974 973
#define MU_DEC973 972
#define MU_DEC972 971
#define MU_DEC971 970
#define MU_DEC970 969
#define MU_DEC969 968
#define MU_DEC968 967
#define MU_DEC967 966
#define MU_DEC966 965
#define MU_DEC965 964
#define MU_DEC964 963
#define MU_DEC963 962
#define MU_DEC962 961
#define MU_DEC961 960
#define MU_DEC960 959
#define MU_DEC959 958
#define MU_DEC958 957
#define MU_DEC957 956
#define MU_DEC956 955
#define MU_DEC955 954
#define MU_DEC954 953
#define MU_DEC953 952
#define MU_DEC952 951
#define MU_DEC951 950
#define MU_DEC950 949
#define MU_DEC949 948
#define MU_DEC948 947
#define MU_DEC947 946
#define MU_DEC946 945
#define MU_DEC945 944
#define MU_DEC944 943
#define MU_DEC943 942
#define MU_DEC942 941
#define MU_DEC941 940
#define MU_DEC940 939
#define MU_DEC939 938
#define MU_DEC938 937
#define MU_DEC937 936
#define MU_DEC936 935
#define MU_DEC935 934
#define MU_DEC934 933
#define MU_DEC933 932
#define MU_DEC932 931
#define MU_DEC931 930
#define MU_DEC930 929
#define MU_DEC929 928
#define MU_DEC928 927
#define MU_DEC927 926
#define MU_DEC926 925
#define MU_DEC925 924
#define MU_DEC924 923
#define MU_DEC923 922
#define MU_DEC922 921
#define MU_DEC921 920
#define MU_DEC920 919
#define MU_DEC919 918
#define MU_DEC918 917
#define MU_DEC917 916
#define MU_DEC916 915
#define MU_DEC915 914
#define MU_DEC914 913
#define MU_DEC913 912
#define MU_DEC912 911
#define MU_DEC911 910
#define MU_DEC910 909
#define MU_DEC909 908
#define MU_DEC908 907
#define MU_DEC907 906
#define MU_DEC906 905
#define MU_DEC905 904
#define MU_DEC904 903
#define MU_DEC903 902
#define MU_DEC902 901
#define MU_DEC901 900
#define MU_DEC900 899
#define MU_DEC899 898
#define MU_DEC898 897
#define MU_DEC897 896
#define MU_DEC896 895
#define MU_DEC895 894
#define MU_DEC894 893
#define MU_DEC893 892
#define MU_DEC892 891
#define MU_DEC891 890
#define MU_DEC890 889
#define MU_DEC889 888
#define MU_DEC888 887
#define MU_DEC887 886
#define MU_DEC886 885
#define MU_DEC885 884
#define MU_DEC884 883
#define MU_DEC883 882
#define MU_DEC882 881
#define MU_DEC881 880
#define MU_DEC880 879
#define MU_DEC879 878
#define MU_DEC878 877
#define MU_DEC877 876
#define MU_DEC876 875
#define MU_DEC875 874
#define MU_DEC874 873
#define MU_DEC873 872
#define MU_DEC872 871
#define MU_DEC871 870
#define MU_DEC870 869
#define MU_DEC869 868
#define MU_DEC868 867
#define MU_DEC867 866
#define MU_DEC866 865
#define MU_DEC865 864
#define MU_DEC864 863
#define MU_DEC863 862
#define MU_DEC862 861
#define MU_DEC861 860
#define MU_DEC860 859
#define MU_DEC859 858
#define MU_DEC858 857
#define MU_DEC857 856
#define MU_DEC856 855
#define MU_DEC855 854
#define MU_DEC854 853
#define MU_DEC853 852
#define MU_DEC852 851
#define MU_DEC851 850
#define MU_DEC850 849
#define MU_DEC849 848
#define MU_DEC848 847
#define MU_DEC847 846
#define MU_DEC846 845
#define MU_DEC845 844
#define MU_DEC844 843
#define MU_DEC843 842
#define MU_DEC842 841
#define MU_DEC841 840
#define MU_DEC840 839
#define MU_DEC839 838
#define MU_DEC838 837
#define MU_DEC837 836
#define MU_DEC836 835
#define MU_DEC835 834
#define MU_DEC834 833
#define MU_DEC833 832
#define MU_DEC832 831
#define MU_DEC831 830
#define MU_DEC830 829
#define MU_DEC829 828
#define MU_DEC828 827
#define MU_DEC827 826
#define MU_DEC826 825
#define MU_DEC825 824
#define MU_DEC824 823
#define MU_DEC823 822
#define MU_DEC822 821
#define MU_DEC821 820
#define MU_DEC820 819
#define MU_DEC819 818
#define MU_DEC818 817
#define MU_DEC817 816
#define MU_DEC816 815
#define MU_DEC815 814
#define MU_DEC814 813
#define MU_DEC813 812
#define MU_DEC812 811
#define MU_DEC811 810
#define MU_DEC810 809
#define MU_DEC809 808
#define MU_DEC808 807
#define MU_DEC807 806
#define MU_DEC806 805
#define MU_DEC805 804
#define MU_DEC804 803
#define MU_DEC803 802
#define MU_DEC802 801
#define MU_DEC801 800
#define MU_DEC800 799
#define MU_DEC799 798
#define MU_DEC798 797
#define MU_DEC797 796
#define MU_DEC796 795
#define MU_DEC795 794
#define MU_DEC794 793
#define MU_DEC793 792
#define MU_DEC792 791
#define MU_DEC791 790
#define MU_DEC790 789
#define MU_DEC789 788
#define MU_DEC788 787
#define MU_DEC787 786
#define MU_DEC786 785
#define MU_DEC785 784
#define MU_DEC784 783
#define MU_DEC783 782
#define MU_DEC782 781
#define MU_DEC781 780
#define MU_DEC780 779
#define MU_DEC779 778
#define MU_DEC778 777
#define MU_DEC777 776
#define MU_DEC776 775
#define MU_DEC775 774
#define MU_DEC774 773
#define MU_DEC773 772
#define MU_DEC772 771
#define MU_DEC771 770
#define MU_DEC770 769
#define MU_DEC769 768
#define MU_DEC768 767
#define MU_DEC767 766
#define MU_DEC766 765
#define MU_DEC765 764
#define MU_DEC764 763
#define MU_DEC763 762
#define MU_DEC762 761
#define MU_DEC761 760
#define MU_DEC760 759
#define MU_DEC759 758
#define MU_DEC758 757
#define MU_DEC757 756
#define MU_DEC756 755
#define MU_DEC755 754
#define MU_DEC754 753
#define MU_DEC753 752
#define MU_DEC752 751
#define MU_DEC751 750
#define MU_DEC750 749
#define MU_DEC749 748
#define MU_DEC748 747
#define MU_DEC747 746
#define MU_DEC746 745
#define MU_DEC745 744
#define MU_DEC744 743
#define MU_DEC743 742
#define MU_DEC742 741
#define MU_DEC741 740
#define MU_DEC740 739
#define MU_DEC739 738
#define MU_DEC738 737
#define MU_DEC737 736
#define MU_DEC736 735
#define MU_DEC735 734
#define MU_DEC734 733
#define MU_DEC733 732
#define MU_DEC732 731
#define MU_DEC731 730
#define MU_DEC730 729
#define MU_DEC729 728
#define MU_DEC728 727
#define MU_DEC727 726
#define MU_DEC726 725
#define MU_DEC725 724
#define MU_DEC724 723
#define MU_DEC723 722
#define MU_DEC722 721
#define MU_DEC721 720
#define MU_DEC720 719
#define MU_DEC719 718
#define MU_DEC718 717
#define MU_DEC717 716
#define MU_DEC716 715
#define MU_DEC715 714
#define MU_DEC714 713
#define MU_DEC713 712
#define MU_DEC712 711
#define MU_DEC711 710
#define MU_DEC710 709
#define MU_DEC709 708
#define MU_DEC708 707
#define MU_DEC707 706
#define MU_DEC706 705
#define MU_DEC705 704
#define MU_DEC704 703
#define MU_DEC703 702
#define MU_DEC702 701
#define MU_DEC701 700
#define MU_DEC700 699
#define MU_DEC699 698
#define MU_DEC698 697
#define MU_DEC697 696
#define MU_DEC696 695
#define MU_DEC695 694
#define MU_DEC694 693
#define MU_DEC693 692
#define MU_DEC692 691
#define MU_DEC691 690
#define MU_DEC690 689
#define MU_DEC689 688
#define MU_DEC688 687
#define MU_DEC687 686
#define MU_DEC686 685
#define MU_DEC685 684
#define MU_DEC684 683
#define MU_DEC683 682
#define MU_DEC682 681
#define MU_DEC681 680
#define MU_DEC680 679
#define MU_DEC679 678
#define MU_DEC678 677
#define MU_DEC677 676
#define MU_DEC676 675
#define MU_DEC675 674
#define MU_DEC674 673
#define MU_DEC673 672
#define MU_DEC672 671
#define MU_DEC671 670
#define MU_DEC670 669
#define MU_DEC669 668
#define MU_DEC668 667
#define MU_DEC667 666
#define MU_DEC666 665
#define MU_DEC665 664
#define MU_DEC664 663
#define MU_DEC663 662
#define MU_DEC662 661
#define MU_DEC661 660
#define MU_DEC660 659
#define MU_DEC659 658
#define MU_DEC658 657
#define MU_DEC657 656
#define MU_DEC656 655
#define MU_DEC655 654
#define MU_DEC654 653
#define MU_DEC653 652
#define MU_DEC652 651
#define MU_DEC651 650
#define MU_DEC650 649
#define MU_DEC649 648
#define MU_DEC648 647
#define MU_DEC647 646
#define MU_DEC646 645
#define MU_DEC645 644
#define MU_DEC644 643
#define MU_DEC643 642
#define MU_DEC642 641
#define MU_DEC641 640
#define MU_DEC640 639
#define MU_DEC639 638
#define MU_DEC638 637
#define MU_DEC637 636
#define MU_DEC636 635
#define MU_DEC635 634
#define MU_DEC634 633
#define MU_DEC633 632
#define MU_DEC632 631
#define MU_DEC631 630
#define MU_DEC630 629
#define MU_DEC629 628
#define MU_DEC628 627
#define MU_DEC627 626
#define MU_DEC626 625
#define MU_DEC625 624
#define MU_DEC624 623
#define MU_DEC623 622
#define MU_DEC622 621
#define MU_DEC621 620
#define MU_DEC620 619
#define MU_DEC619 618
#define MU_DEC618 617
#define MU_DEC617 616
#define MU_DEC616 615
#define MU_DEC615 614
#define MU_DEC614 613
#define MU_DEC613 612
#define MU_DEC612 611
#define MU_DEC611 610
#define MU_DEC610 609
#define MU_DEC609 608
#define MU_DEC608 607
#define MU_DEC607 606
#define MU_DEC606 605
#define MU_DEC605 604
#define MU_DEC604 603
#define MU_DEC603 602
#define MU_DEC602 601
#define MU_DEC601 600
#define MU_DEC600 599
#define MU_DEC599 598
#define MU_DEC598 597
#define MU_DEC597 596
#define MU_DEC596 595
#define MU_DEC595 594
#define MU_DEC594 593
#define MU_DEC593 592
#define MU_DEC592 591
#define MU_DEC591 590
#define MU_DEC590 589
#define MU_DEC589 588
#define MU_DEC588 587
#define MU_DEC587 586
#define MU_DEC586 585
#define MU_DEC585 584
#define MU_DEC584 583
#define MU_DEC583 582
#define MU_DEC582 581
#define MU_DEC581 580
#define MU_DEC580 579
#define MU_DEC579 578
#define MU_DEC578 577
#define MU_DEC577 576
#define MU_DEC576 575
#define MU_DEC575 574
#define MU_DEC574 573
#define MU_DEC573 572
#define MU_DEC572 571
#define MU_DEC571 570
#define MU_DEC570 569
#define MU_DEC569 568
#define MU_DEC568 567
#define MU_DEC567 566
#define MU_DEC566 565
#define MU_DEC565 564
#define MU_DEC564 563
#define MU_DEC563 562
#define MU_DEC562 561
#define MU_DEC561 560
#define MU_DEC560 559
#define MU_DEC559 558
#define MU_DEC558 557
#define MU_DEC557 556
#define MU_DEC556 555
#define MU_DEC555 554
#define MU_DEC554 553
#define MU_DEC553 552
#define MU_DEC552 551
#define MU_DEC551 550
#define MU_DEC550 549
#define MU_DEC549 548
#define MU_DEC548 547
#define MU_DEC547 546
#define MU_DEC546 545
#define MU_DEC545 544
#define MU_DEC544 543
#define MU_DEC543 542
#define MU_DEC542 541
#define MU_DEC541 540
#define MU_DEC540 539
#define MU_DEC539 538
#define MU_DEC538 537
#define MU_DEC537 536
#define MU_DEC536 535
#define MU_DEC535 534
#define MU_DEC534 533
#define MU_DEC533 532
#define MU_DEC532 531
#define MU_DEC531 530
#define MU_DEC530 529
#define MU_DEC529 528
#define MU_DEC528 527
#define MU_DEC527 526
#define MU_DEC526 525
#define MU_DEC525 524
#define MU_DEC524 523
#define MU_DEC523 522
#define MU_DEC522 521
#define MU_DEC521 520
#define MU_DEC520 519
#define MU_DEC519 518
#define MU_DEC518 517
#define MU_DEC517 516
#define MU_DEC516 515
#define MU_DEC515 514
#define MU_DEC514 513
#define MU_DEC513 512
#define MU_DEC512 511
#define MU_DEC511 510
#define MU_DEC510 509
#define MU_DEC509 508
#define MU_DEC508 507
#define MU_DEC507 506
#define MU_DEC506 505
#define MU_DEC505 504
#define MU_DEC504 503
#define MU_DEC503 502
#define MU_DEC502 501
#define MU_DEC501 500
#define MU_DEC500 499
#define MU_DEC499 498
#define MU_DEC498 497
#define MU_DEC497 496
#define MU_DEC496 495
#define MU_DEC495 494
#define MU_DEC494 493
#define MU_DEC493 492
#define MU_DEC492 491
#define MU_DEC491 490
#define MU_DEC490 489
#define MU_DEC489 488
#define MU_DEC488 487
#define MU_DEC487 486
#define MU_DEC486 485
#define MU_DEC485 484
#define MU_DEC484 483
#define MU_DEC483 482
#define MU_DEC482 481
#define MU_DEC481 480
#define MU_DEC480 479
#define MU_DEC479 478
#define MU_DEC478 477
#define MU_DEC477 476
#define MU_DEC476 475
#define MU_DEC475 474
#define MU_DEC474 473
#define MU_DEC473 472
#define MU_DEC472 471
#define MU_DEC471 470
#define MU_DEC470 469
#define MU_DEC469 468
#define MU_DEC468 467
#define MU_DEC467 466
#define MU_DEC466 465
#define MU_DEC465 464
#define MU_DEC464 463
#define MU_DEC463 462
#define MU_DEC462 461
#define MU_DEC461 460
#define MU_DEC460 459
#define MU_DEC459 458
#define MU_DEC458 457
#define MU_DEC457 456
#define MU_DEC456 455
#define MU_DEC455 454
#define MU_DEC454 453
#define MU_DEC453 452
#define MU_DEC452 451
#define MU_DEC451 450
#define MU_DEC450 449
#define MU_DEC449 448
#define MU_DEC448 447
#define MU_DEC447 446
#define MU_DEC446 445
#define MU_DEC445 444
#define MU_DEC444 443
#define MU_DEC443 442
#define MU_DEC442 441
#define MU_DEC441 440
#define MU_DEC440 439
#define MU_DEC439 438
#define MU_DEC438 437
#define MU_DEC437 436
#define MU_DEC436 435
#define MU_DEC435 434
#define MU_DEC434 433
#define MU_DEC433 432
#define MU_DEC432 431
#define MU_DEC431 430
#define MU_DEC430 429
#define MU_DEC429 428
#define MU_DEC428 427
#define MU_DEC427 426
#define MU_DEC426 425
#define MU_DEC425 424
#define MU_DEC424 423
#define MU_DEC423 422
#define MU_DEC422 421
#define MU_DEC421 420
#define MU_DEC420 419
#define MU_DEC419 418
#define MU_DEC418 417
#define MU_DEC417 416
#define MU_DEC416 415
#define MU_DEC415 414
#define MU_DEC414 413
#define MU_DEC413 412
#define MU_DEC412 411
#define MU_DEC411 410
#define MU_DEC410 409
#define MU_DEC409 408
#define MU_DEC408 407
#define MU_DEC407 406
#define MU_DEC406 405
#define MU_DEC405 404
#define MU_DEC404 403
#define MU_DEC403 402
#define MU_DEC402 401
#define MU_DEC401 400
#define MU_DEC400 399
#define MU_DEC399 398
#define MU_DEC398 397
#define MU_DEC397 396
#define MU_DEC396 395
#define MU_DEC395 394
#define MU_DEC394 393
#define MU_DEC393 392
#define MU_DEC392 391
#define MU_DEC391 390
#define MU_DEC390 389
#define MU_DEC389 388
#define MU_DEC388 387
#define MU_DEC387 386
#define MU_DEC386 385
#define MU_DEC385 384
#define MU_DEC384 383
#define MU_DEC383 382
#define MU_DEC382 381
#define MU_DEC381 380
#define MU_DEC380 379
#define MU_DEC379 378
#define MU_DEC378 377
#define MU_DEC377 376
#define MU_DEC376 375
#define MU_DEC375 374
#define MU_DEC374 373
#define MU_DEC373 372
#define MU_DEC372 371
#define MU_DEC371 370
#define MU_DEC370 369
#define MU_DEC369 368
#define MU_DEC368 367
#define MU_DEC367 366
#define MU_DEC366 365
#define MU_DEC365 364
#define MU_DEC364 363
#define MU_DEC363 362
#define MU_DEC362 361
#define MU_DEC361 360
#define MU_DEC360 359
#define MU_DEC359 358
#define MU_DEC358 357
#define MU_DEC357 356
#define MU_DEC356 355
#define MU_DEC355 354
#define MU_DEC354 353
#define MU_DEC353 352
#define MU_DEC352 351
#define MU_DEC351 350
#define MU_DEC350 349
#define MU_DEC349 348
#define MU_DEC348 347
#define MU_DEC347 346
#define MU_DEC346 345
#define MU_DEC345 344
#define MU_DEC344 343
#define MU_DEC343 342
#define MU_DEC342 341
#define MU_DEC341 340
#define MU_DEC340 339
#define MU_DEC339 338
#define MU_DEC338 337
#define MU_DEC337 336
#define MU_DEC336 335
#define MU_DEC335 334
#define MU_DEC334 333
#define MU_DEC333 332
#define MU_DEC332 331
#define MU_DEC331 330
#define MU_DEC330 329
#define MU_DEC329 328
#define MU_DEC328 327
#define MU_DEC327 326
#define MU_DEC326 325
#define MU_DEC325 324
#define MU_DEC324 323
#define MU_DEC323 322
#define MU_DEC322 321
#define MU_DEC321 320
#define MU_DEC320 319
#define MU_DEC319 318
#define MU_DEC318 317
#define MU_DEC317 316
#define MU_DEC316 315
#define MU_DEC315 314
#define MU_DEC314 313
#define MU_DEC313 312
#define MU_DEC312 311
#define MU_DEC311 310
#define MU_DEC310 309
#define MU_DEC309 308
#define MU_DEC308 307
#define MU_DEC307 306
#define MU_DEC306 305
#define MU_DEC305 304
#define MU_DEC304 303
#define MU_DEC303 302
#define MU_DEC302 301
#define MU_DEC301 300
#define MU_DEC300 299
#define MU_DEC299 298
#define MU_DEC298 297
#define MU_DEC297 296
#define MU_DEC296 295
#define MU_DEC295 294
#define MU_DEC294 293
#define MU_DEC293 292
#define MU_DEC292 291
#define MU_DEC291 290
#define MU_DEC290 289
#define MU_DEC289 288
#define MU_DEC288 287
#define MU_DEC287 286
#define MU_DEC286 285
#define MU_DEC285 284
#define MU_DEC284 283
#define MU_DEC283 282
#define MU_DEC282 281
#define MU_DEC281 280
#define MU_DEC280 279
#define MU_DEC279 278
#define MU_DEC278 277
#define MU_DEC277 276
#define MU_DEC276 275
#define MU_DEC275 274
#define MU_DEC274 273
#define MU_DEC273 272
#define MU_DEC272 271
#define MU_DEC271 270
#define MU_DEC270 269
#define MU_DEC269 268
#define MU_DEC268 267
#define MU_DEC267 266
#define MU_DEC266 265
#define MU_DEC265 264
#define MU_DEC264 263
#define MU_DEC263 262
#define MU_DEC262 261
#define MU_DEC261 260
#define MU_DEC260 259
#define MU_DEC259 258
#define MU_DEC258 257
#define MU_DEC257 256
#define MU_DEC256 255
#define MU_DEC255 254
#define MU_DEC254 253
#define MU_DEC253 252
#define MU_DEC252 251
#define MU_DEC251 250
#define MU_DEC250 249
#define MU_DEC249 248
#define MU_DEC248 247
#define MU_DEC247 246
#define MU_DEC246 245
#define MU_DEC245 244
#define MU_DEC244 243
#define MU_DEC243 242
#define MU_DEC242 241
#define MU_DEC241 240
#define MU_DEC240 239
#define MU_DEC239 238
#define MU_DEC238 237
#define MU_DEC237 236
#define MU_DEC236 235
#define MU_DEC235 234
#define MU_DEC234 233
#define MU_DEC233 232
#define MU_DEC232 231
#define MU_DEC231 230
#define MU_DEC230 229
#define MU_DEC229 228
#define MU_DEC228 227
#define MU_DEC227 226
#define MU_DEC226 225
#define MU_DEC225 224
#define MU_DEC224 223
#define MU_DEC223 222
#define MU_DEC222 221
#define MU_DEC221 220
#define MU_DEC220 219
#define MU_DEC219 218
#define MU_DEC218 217
#define MU_DEC217 216
#define MU_DEC216 215
#define MU_DEC215 214
#define MU_DEC214 213
#define MU_DEC213 212
#define MU_DEC212 211
#define MU_DEC211 210
#define MU_DEC210 209
#define MU_DEC209 208
#define MU_DEC208 207
#define MU_DEC207 206
#define MU_DEC206 205
#define MU_DEC205 204
#define MU_DEC204 203
#define MU_DEC203 202
#define MU_DEC202 201
#define MU_DEC201 200
#define MU_DEC200 199
#define MU_DEC199 198
#define MU_DEC198 197
#define MU_DEC197 196
#define MU_DEC196 195
#define MU_DEC195 194
#define MU_DEC194 193
#define MU_DEC193 192
#define MU_DEC192 191
#define MU_DEC191 190
#define MU_DEC190 189
#define MU_DEC189 188
#define MU_DEC188 187
#define MU_DEC187 186
#define MU_DEC186 185
#define MU_DEC185 184
#define MU_DEC184 183
#define MU_DEC183 182
#define MU_DEC182 181
#define MU_DEC181 180
#define MU_DEC180 179
#define MU_DEC179 178
#define MU_DEC178 177
#define MU_DEC177 176
#define MU_DEC176 175
#define MU_DEC175 174
#define MU_DEC174 173
#define MU_DEC173 172
#define MU_DEC172 171
#define MU_DEC171 170
#define MU_DEC170 169
#define MU_DEC169 168
#define MU_DEC168 167
#define MU_DEC167 166
#define MU_DEC166 165
#define MU_DEC165 164
#define MU_DEC164 163
#define MU_DEC163 162
#define MU_DEC162 161
#define MU_DEC161 160
#define MU_DEC160 159
#define MU_DEC159 158
#define MU_DEC158 157
#define MU_DEC157 156
#define MU_DEC156 155
#define MU_DEC155 154
#define MU_DEC154 153
#define MU_DEC153 152
#define MU_DEC152 151
#define MU_DEC151 150
#define MU_DEC150 149
#define MU_DEC149 148
#define MU_DEC148 147
#define MU_DEC147 146
#define MU_DEC146 145
#define MU_DEC145 144
#define MU_DEC144 143
#define MU_DEC143 142
#define MU_DEC142 141
#define MU_DEC141 140
#define MU_DEC140 139
#define MU_DEC139 138
#define MU_DEC138 137
#define MU_DEC137 136
#define MU_DEC136 135
#define MU_DEC135 134
#define MU_DEC134 133
#define MU_DEC133 132
#define MU_DEC132 131
#define MU_DEC131 130
#define MU_DEC130 129
#define MU_DEC129 128
#define MU_DEC128 127
#define MU_DEC127 126
#define MU_DEC126 125
#define MU_DEC125 124
#define MU_DEC124 123
#define MU_DEC123 122
#define MU_DEC122 121
#define MU_DEC121 120
#define MU_DEC120 119
#define MU_DEC119 118
#define MU_DEC118 117
#define MU_DEC117 116
#define MU_DEC116 115
#define MU_DEC115 114
#define MU_DEC114 113
#define MU_DEC113 112
#define MU_DEC112 111
#define MU_DEC111 110
#define MU_DEC110 109
#define MU_DEC109 108
#define MU_DEC108 107
#define MU_DEC107 106
#define MU_DEC106 105
#define MU_DEC105 104
#define MU_DEC104 103
#define MU_DEC103 102
#define MU_DEC102 101
#define MU_DEC101 100
#define MU_DEC100 99
#define MU_DEC99 98
#define MU_DEC98 97
#define MU_DEC97 96
#define MU_DEC96 95
#define MU_DEC95 94
#define MU_DEC94 93
#define MU_DEC93 92
#define MU_DEC92 91
#define MU_DEC91 90
#define MU_DEC90 89
#define MU_DEC89 88
#define MU_DEC88 87
#define MU_DEC87 86
#define MU_DEC86 85
#define MU_DEC85 84
#define MU_DEC84 83
#define MU_DEC83 82
#define MU_DEC82 81
#define MU_DEC81 80
#define MU_DEC80 79
#define MU_DEC79 78
#define MU_DEC78 77
#define MU_DEC77 76
#define MU_DEC76 75
#define MU_DEC75 74
#define MU_DEC74 73
#define MU_DEC73 72
#define MU_DEC72 71
#define MU_DEC71 70
#define MU_DEC70 69
#define MU_DEC69 68
#define MU_DEC68 67
#define MU_DEC67 66
#define MU_DEC66 65
#define MU_DEC65 64
#define MU_DEC64 63
#define MU_DEC63 62
#define MU_DEC62 61
#define MU_DEC61 60
#define MU_DEC60 59
#define MU_DEC59 58
#define MU_DEC58 57
#define MU_DEC57 56
#define MU_DEC56 55
#define MU_DEC55 54
#define MU_DEC54 53
#define MU_DEC53 52
#define MU_DEC52 51
#define MU_DEC51 50
#define MU_DEC50 49
#define MU_DEC49 48
#define MU_DEC48 47
#define MU_DEC47 46
#define MU_DEC46 45
#define MU_DEC45 44
#define MU_DEC44 43
#define MU_DEC43 42
#define MU_DEC42 41
#define MU_DEC41 40
#define MU_DEC40 39
#define MU_DEC39 38
#define MU_DEC38 37
#define MU_DEC37 36
#define MU_DEC36 35
#define MU_DEC35 34
#define MU_DEC34 33
#define MU_DEC33 32
#define MU_DEC32 31
#define MU_DEC31 30
#define MU_DEC30 29
#define MU_DEC29 28
#define MU_DEC28 27
#define MU_DEC27 26
#define MU_DEC26 25
#define MU_DEC25 24
#define MU_DEC24 23
#define MU_DEC23 22
#define MU_DEC22 21
#define MU_DEC21 20
#define MU_DEC20 19
#define MU_DEC19 18
#define MU_DEC18 17
#define MU_DEC17 16
#define MU_DEC16 15
#define MU_DEC15 14
#define MU_DEC14 13
#define MU_DEC13 12
#define MU_DEC12 11
#define MU_DEC11 10
#define MU_DEC10 9
#define MU_DEC9 8
#define MU_DEC8 7
#define MU_DEC7 6
#define MU_DEC6 5
#define MU_DEC5 4
#define MU_DEC4 3
#define MU_DEC3 2
#define MU_DEC2 1
#define MU_DEC1 0

#define MU_INC(x) MU_C2(MU_INC,x)
#define MU_INC1024 1025
#define MU_INC1023 1024
#define MU_INC1022 1023
#define MU_INC1021 1022
#define MU_INC1020 1021
#define MU_INC1019 1020
#define MU_INC1018 1019
#define MU_INC1017 1018
#define MU_INC1016 1017
#define MU_INC1015 1016
#define MU_INC1014 1015
#define MU_INC1013 1014
#define MU_INC1012 1013
#define MU_INC1011 1012
#define MU_INC1010 1011
#define MU_INC1009 1010
#define MU_INC1008 1009
#define MU_INC1007 1008
#define MU_INC1006 1007
#define MU_INC1005 1006
#define MU_INC1004 1005
#define MU_INC1003 1004
#define MU_INC1002 1003
#define MU_INC1001 1002
#define MU_INC1000 1001
#define MU_INC999 1000
#define MU_INC998 999
#define MU_INC997 998
#define MU_INC996 997
#define MU_INC995 996
#define MU_INC994 995
#define MU_INC993 994
#define MU_INC992 993
#define MU_INC991 992
#define MU_INC990 991
#define MU_INC989 990
#define MU_INC988 989
#define MU_INC987 988
#define MU_INC986 987
#define MU_INC985 986
#define MU_INC984 985
#define MU_INC983 984
#define MU_INC982 983
#define MU_INC981 982
#define MU_INC980 981
#define MU_INC979 980
#define MU_INC978 979
#define MU_INC977 978
#define MU_INC976 977
#define MU_INC975 976
#define MU_INC974 975
#define MU_INC973 974
#define MU_INC972 973
#define MU_INC971 972
#define MU_INC970 971
#define MU_INC969 970
#define MU_INC968 969
#define MU_INC967 968
#define MU_INC966 967
#define MU_INC965 966
#define MU_INC964 965
#define MU_INC963 964
#define MU_INC962 963
#define MU_INC961 962
#define MU_INC960 961
#define MU_INC959 960
#define MU_INC958 959
#define MU_INC957 958
#define MU_INC956 957
#define MU_INC955 956
#define MU_INC954 955
#define MU_INC953 954
#define MU_INC952 953
#define MU_INC951 952
#define MU_INC950 951
#define MU_INC949 950
#define MU_INC948 949
#define MU_INC947 948
#define MU_INC946 947
#define MU_INC945 946
#define MU_INC944 945
#define MU_INC943 944
#define MU_INC942 943
#define MU_INC941 942
#define MU_INC940 941
#define MU_INC939 940
#define MU_INC938 939
#define MU_INC937 938
#define MU_INC936 937
#define MU_INC935 936
#define MU_INC934 935
#define MU_INC933 934
#define MU_INC932 933
#define MU_INC931 932
#define MU_INC930 931
#define MU_INC929 930
#define MU_INC928 929
#define MU_INC927 928
#define MU_INC926 927
#define MU_INC925 926
#define MU_INC924 925
#define MU_INC923 924
#define MU_INC922 923
#define MU_INC921 922
#define MU_INC920 921
#define MU_INC919 920
#define MU_INC918 919
#define MU_INC917 918
#define MU_INC916 917
#define MU_INC915 916
#define MU_INC914 915
#define MU_INC913 914
#define MU_INC912 913
#define MU_INC911 912
#define MU_INC910 911
#define MU_INC909 910
#define MU_INC908 909
#define MU_INC907 908
#define MU_INC906 907
#define MU_INC905 906
#define MU_INC904 905
#define MU_INC903 904
#define MU_INC902 903
#define MU_INC901 902
#define MU_INC900 901
#define MU_INC899 900
#define MU_INC898 899
#define MU_INC897 898
#define MU_INC896 897
#define MU_INC895 896
#define MU_INC894 895
#define MU_INC893 894
#define MU_INC892 893
#define MU_INC891 892
#define MU_INC890 891
#define MU_INC889 890
#define MU_INC888 889
#define MU_INC887 888
#define MU_INC886 887
#define MU_INC885 886
#define MU_INC884 885
#define MU_INC883 884
#define MU_INC882 883
#define MU_INC881 882
#define MU_INC880 881
#define MU_INC879 880
#define MU_INC878 879
#define MU_INC877 878
#define MU_INC876 877
#define MU_INC875 876
#define MU_INC874 875
#define MU_INC873 874
#define MU_INC872 873
#define MU_INC871 872
#define MU_INC870 871
#define MU_INC869 870
#define MU_INC868 869
#define MU_INC867 868
#define MU_INC866 867
#define MU_INC865 866
#define MU_INC864 865
#define MU_INC863 864
#define MU_INC862 863
#define MU_INC861 862
#define MU_INC860 861
#define MU_INC859 860
#define MU_INC858 859
#define MU_INC857 858
#define MU_INC856 857
#define MU_INC855 856
#define MU_INC854 855
#define MU_INC853 854
#define MU_INC852 853
#define MU_INC851 852
#define MU_INC850 851
#define MU_INC849 850
#define MU_INC848 849
#define MU_INC847 848
#define MU_INC846 847
#define MU_INC845 846
#define MU_INC844 845
#define MU_INC843 844
#define MU_INC842 843
#define MU_INC841 842
#define MU_INC840 841
#define MU_INC839 840
#define MU_INC838 839
#define MU_INC837 838
#define MU_INC836 837
#define MU_INC835 836
#define MU_INC834 835
#define MU_INC833 834
#define MU_INC832 833
#define MU_INC831 832
#define MU_INC830 831
#define MU_INC829 830
#define MU_INC828 829
#define MU_INC827 828
#define MU_INC826 827
#define MU_INC825 826
#define MU_INC824 825
#define MU_INC823 824
#define MU_INC822 823
#define MU_INC821 822
#define MU_INC820 821
#define MU_INC819 820
#define MU_INC818 819
#define MU_INC817 818
#define MU_INC816 817
#define MU_INC815 816
#define MU_INC814 815
#define MU_INC813 814
#define MU_INC812 813
#define MU_INC811 812
#define MU_INC810 811
#define MU_INC809 810
#define MU_INC808 809
#define MU_INC807 808
#define MU_INC806 807
#define MU_INC805 806
#define MU_INC804 805
#define MU_INC803 804
#define MU_INC802 803
#define MU_INC801 802
#define MU_INC800 801
#define MU_INC799 800
#define MU_INC798 799
#define MU_INC797 798
#define MU_INC796 797
#define MU_INC795 796
#define MU_INC794 795
#define MU_INC793 794
#define MU_INC792 793
#define MU_INC791 792
#define MU_INC790 791
#define MU_INC789 790
#define MU_INC788 789
#define MU_INC787 788
#define MU_INC786 787
#define MU_INC785 786
#define MU_INC784 785
#define MU_INC783 784
#define MU_INC782 783
#define MU_INC781 782
#define MU_INC780 781
#define MU_INC779 780
#define MU_INC778 779
#define MU_INC777 778
#define MU_INC776 777
#define MU_INC775 776
#define MU_INC774 775
#define MU_INC773 774
#define MU_INC772 773
#define MU_INC771 772
#define MU_INC770 771
#define MU_INC769 770
#define MU_INC768 769
#define MU_INC767 768
#define MU_INC766 767
#define MU_INC765 766
#define MU_INC764 765
#define MU_INC763 764
#define MU_INC762 763
#define MU_INC761 762
#define MU_INC760 761
#define MU_INC759 760
#define MU_INC758 759
#define MU_INC757 758
#define MU_INC756 757
#define MU_INC755 756
#define MU_INC754 755
#define MU_INC753 754
#define MU_INC752 753
#define MU_INC751 752
#define MU_INC750 751
#define MU_INC749 750
#define MU_INC748 749
#define MU_INC747 748
#define MU_INC746 747
#define MU_INC745 746
#define MU_INC744 745
#define MU_INC743 744
#define MU_INC742 743
#define MU_INC741 742
#define MU_INC740 741
#define MU_INC739 740
#define MU_INC738 739
#define MU_INC737 738
#define MU_INC736 737
#define MU_INC735 736
#define MU_INC734 735
#define MU_INC733 734
#define MU_INC732 733
#define MU_INC731 732
#define MU_INC730 731
#define MU_INC729 730
#define MU_INC728 729
#define MU_INC727 728
#define MU_INC726 727
#define MU_INC725 726
#define MU_INC724 725
#define MU_INC723 724
#define MU_INC722 723
#define MU_INC721 722
#define MU_INC720 721
#define MU_INC719 720
#define MU_INC718 719
#define MU_INC717 718
#define MU_INC716 717
#define MU_INC715 716
#define MU_INC714 715
#define MU_INC713 714
#define MU_INC712 713
#define MU_INC711 712
#define MU_INC710 711
#define MU_INC709 710
#define MU_INC708 709
#define MU_INC707 708
#define MU_INC706 707
#define MU_INC705 706
#define MU_INC704 705
#define MU_INC703 704
#define MU_INC702 703
#define MU_INC701 702
#define MU_INC700 701
#define MU_INC699 700
#define MU_INC698 699
#define MU_INC697 698
#define MU_INC696 697
#define MU_INC695 696
#define MU_INC694 695
#define MU_INC693 694
#define MU_INC692 693
#define MU_INC691 692
#define MU_INC690 691
#define MU_INC689 690
#define MU_INC688 689
#define MU_INC687 688
#define MU_INC686 687
#define MU_INC685 686
#define MU_INC684 685
#define MU_INC683 684
#define MU_INC682 683
#define MU_INC681 682
#define MU_INC680 681
#define MU_INC679 680
#define MU_INC678 679
#define MU_INC677 678
#define MU_INC676 677
#define MU_INC675 676
#define MU_INC674 675
#define MU_INC673 674
#define MU_INC672 673
#define MU_INC671 672
#define MU_INC670 671
#define MU_INC669 670
#define MU_INC668 669
#define MU_INC667 668
#define MU_INC666 667
#define MU_INC665 666
#define MU_INC664 665
#define MU_INC663 664
#define MU_INC662 663
#define MU_INC661 662
#define MU_INC660 661
#define MU_INC659 660
#define MU_INC658 659
#define MU_INC657 658
#define MU_INC656 657
#define MU_INC655 656
#define MU_INC654 655
#define MU_INC653 654
#define MU_INC652 653
#define MU_INC651 652
#define MU_INC650 651
#define MU_INC649 650
#define MU_INC648 649
#define MU_INC647 648
#define MU_INC646 647
#define MU_INC645 646
#define MU_INC644 645
#define MU_INC643 644
#define MU_INC642 643
#define MU_INC641 642
#define MU_INC640 641
#define MU_INC639 640
#define MU_INC638 639
#define MU_INC637 638
#define MU_INC636 637
#define MU_INC635 636
#define MU_INC634 635
#define MU_INC633 634
#define MU_INC632 633
#define MU_INC631 632
#define MU_INC630 631
#define MU_INC629 630
#define MU_INC628 629
#define MU_INC627 628
#define MU_INC626 627
#define MU_INC625 626
#define MU_INC624 625
#define MU_INC623 624
#define MU_INC622 623
#define MU_INC621 622
#define MU_INC620 621
#define MU_INC619 620
#define MU_INC618 619
#define MU_INC617 618
#define MU_INC616 617
#define MU_INC615 616
#define MU_INC614 615
#define MU_INC613 614
#define MU_INC612 613
#define MU_INC611 612
#define MU_INC610 611
#define MU_INC609 610
#define MU_INC608 609
#define MU_INC607 608
#define MU_INC606 607
#define MU_INC605 606
#define MU_INC604 605
#define MU_INC603 604
#define MU_INC602 603
#define MU_INC601 602
#define MU_INC600 601
#define MU_INC599 600
#define MU_INC598 599
#define MU_INC597 598
#define MU_INC596 597
#define MU_INC595 596
#define MU_INC594 595
#define MU_INC593 594
#define MU_INC592 593
#define MU_INC591 592
#define MU_INC590 591
#define MU_INC589 590
#define MU_INC588 589
#define MU_INC587 588
#define MU_INC586 587
#define MU_INC585 586
#define MU_INC584 585
#define MU_INC583 584
#define MU_INC582 583
#define MU_INC581 582
#define MU_INC580 581
#define MU_INC579 580
#define MU_INC578 579
#define MU_INC577 578
#define MU_INC576 577
#define MU_INC575 576
#define MU_INC574 575
#define MU_INC573 574
#define MU_INC572 573
#define MU_INC571 572
#define MU_INC570 571
#define MU_INC569 570
#define MU_INC568 569
#define MU_INC567 568
#define MU_INC566 567
#define MU_INC565 566
#define MU_INC564 565
#define MU_INC563 564
#define MU_INC562 563
#define MU_INC561 562
#define MU_INC560 561
#define MU_INC559 560
#define MU_INC558 559
#define MU_INC557 558
#define MU_INC556 557
#define MU_INC555 556
#define MU_INC554 555
#define MU_INC553 554
#define MU_INC552 553
#define MU_INC551 552
#define MU_INC550 551
#define MU_INC549 550
#define MU_INC548 549
#define MU_INC547 548
#define MU_INC546 547
#define MU_INC545 546
#define MU_INC544 545
#define MU_INC543 544
#define MU_INC542 543
#define MU_INC541 542
#define MU_INC540 541
#define MU_INC539 540
#define MU_INC538 539
#define MU_INC537 538
#define MU_INC536 537
#define MU_INC535 536
#define MU_INC534 535
#define MU_INC533 534
#define MU_INC532 533
#define MU_INC531 532
#define MU_INC530 531
#define MU_INC529 530
#define MU_INC528 529
#define MU_INC527 528
#define MU_INC526 527
#define MU_INC525 526
#define MU_INC524 525
#define MU_INC523 524
#define MU_INC522 523
#define MU_INC521 522
#define MU_INC520 521
#define MU_INC519 520
#define MU_INC518 519
#define MU_INC517 518
#define MU_INC516 517
#define MU_INC515 516
#define MU_INC514 515
#define MU_INC513 514
#define MU_INC512 513
#define MU_INC511 512
#define MU_INC510 511
#define MU_INC509 510
#define MU_INC508 509
#define MU_INC507 508
#define MU_INC506 507
#define MU_INC505 506
#define MU_INC504 505
#define MU_INC503 504
#define MU_INC502 503
#define MU_INC501 502
#define MU_INC500 501
#define MU_INC499 500
#define MU_INC498 499
#define MU_INC497 498
#define MU_INC496 497
#define MU_INC495 496
#define MU_INC494 495
#define MU_INC493 494
#define MU_INC492 493
#define MU_INC491 492
#define MU_INC490 491
#define MU_INC489 490
#define MU_INC488 489
#define MU_INC487 488
#define MU_INC486 487
#define MU_INC485 486
#define MU_INC484 485
#define MU_INC483 484
#define MU_INC482 483
#define MU_INC481 482
#define MU_INC480 481
#define MU_INC479 480
#define MU_INC478 479
#define MU_INC477 478
#define MU_INC476 477
#define MU_INC475 476
#define MU_INC474 475
#define MU_INC473 474
#define MU_INC472 473
#define MU_INC471 472
#define MU_INC470 471
#define MU_INC469 470
#define MU_INC468 469
#define MU_INC467 468
#define MU_INC466 467
#define MU_INC465 466
#define MU_INC464 465
#define MU_INC463 464
#define MU_INC462 463
#define MU_INC461 462
#define MU_INC460 461
#define MU_INC459 460
#define MU_INC458 459
#define MU_INC457 458
#define MU_INC456 457
#define MU_INC455 456
#define MU_INC454 455
#define MU_INC453 454
#define MU_INC452 453
#define MU_INC451 452
#define MU_INC450 451
#define MU_INC449 450
#define MU_INC448 449
#define MU_INC447 448
#define MU_INC446 447
#define MU_INC445 446
#define MU_INC444 445
#define MU_INC443 444
#define MU_INC442 443
#define MU_INC441 442
#define MU_INC440 441
#define MU_INC439 440
#define MU_INC438 439
#define MU_INC437 438
#define MU_INC436 437
#define MU_INC435 436
#define MU_INC434 435
#define MU_INC433 434
#define MU_INC432 433
#define MU_INC431 432
#define MU_INC430 431
#define MU_INC429 430
#define MU_INC428 429
#define MU_INC427 428
#define MU_INC426 427
#define MU_INC425 426
#define MU_INC424 425
#define MU_INC423 424
#define MU_INC422 423
#define MU_INC421 422
#define MU_INC420 421
#define MU_INC419 420
#define MU_INC418 419
#define MU_INC417 418
#define MU_INC416 417
#define MU_INC415 416
#define MU_INC414 415
#define MU_INC413 414
#define MU_INC412 413
#define MU_INC411 412
#define MU_INC410 411
#define MU_INC409 410
#define MU_INC408 409
#define MU_INC407 408
#define MU_INC406 407
#define MU_INC405 406
#define MU_INC404 405
#define MU_INC403 404
#define MU_INC402 403
#define MU_INC401 402
#define MU_INC400 401
#define MU_INC399 400
#define MU_INC398 399
#define MU_INC397 398
#define MU_INC396 397
#define MU_INC395 396
#define MU_INC394 395
#define MU_INC393 394
#define MU_INC392 393
#define MU_INC391 392
#define MU_INC390 391
#define MU_INC389 390
#define MU_INC388 389
#define MU_INC387 388
#define MU_INC386 387
#define MU_INC385 386
#define MU_INC384 385
#define MU_INC383 384
#define MU_INC382 383
#define MU_INC381 382
#define MU_INC380 381
#define MU_INC379 380
#define MU_INC378 379
#define MU_INC377 378
#define MU_INC376 377
#define MU_INC375 376
#define MU_INC374 375
#define MU_INC373 374
#define MU_INC372 373
#define MU_INC371 372
#define MU_INC370 371
#define MU_INC369 370
#define MU_INC368 369
#define MU_INC367 368
#define MU_INC366 367
#define MU_INC365 366
#define MU_INC364 365
#define MU_INC363 364
#define MU_INC362 363
#define MU_INC361 362
#define MU_INC360 361
#define MU_INC359 360
#define MU_INC358 359
#define MU_INC357 358
#define MU_INC356 357
#define MU_INC355 356
#define MU_INC354 355
#define MU_INC353 354
#define MU_INC352 353
#define MU_INC351 352
#define MU_INC350 351
#define MU_INC349 350
#define MU_INC348 349
#define MU_INC347 348
#define MU_INC346 347
#define MU_INC345 346
#define MU_INC344 345
#define MU_INC343 344
#define MU_INC342 343
#define MU_INC341 342
#define MU_INC340 341
#define MU_INC339 340
#define MU_INC338 339
#define MU_INC337 338
#define MU_INC336 337
#define MU_INC335 336
#define MU_INC334 335
#define MU_INC333 334
#define MU_INC332 333
#define MU_INC331 332
#define MU_INC330 331
#define MU_INC329 330
#define MU_INC328 329
#define MU_INC327 328
#define MU_INC326 327
#define MU_INC325 326
#define MU_INC324 325
#define MU_INC323 324
#define MU_INC322 323
#define MU_INC321 322
#define MU_INC320 321
#define MU_INC319 320
#define MU_INC318 319
#define MU_INC317 318
#define MU_INC316 317
#define MU_INC315 316
#define MU_INC314 315
#define MU_INC313 314
#define MU_INC312 313
#define MU_INC311 312
#define MU_INC310 311
#define MU_INC309 310
#define MU_INC308 309
#define MU_INC307 308
#define MU_INC306 307
#define MU_INC305 306
#define MU_INC304 305
#define MU_INC303 304
#define MU_INC302 303
#define MU_INC301 302
#define MU_INC300 301
#define MU_INC299 300
#define MU_INC298 299
#define MU_INC297 298
#define MU_INC296 297
#define MU_INC295 296
#define MU_INC294 295
#define MU_INC293 294
#define MU_INC292 293
#define MU_INC291 292
#define MU_INC290 291
#define MU_INC289 290
#define MU_INC288 289
#define MU_INC287 288
#define MU_INC286 287
#define MU_INC285 286
#define MU_INC284 285
#define MU_INC283 284
#define MU_INC282 283
#define MU_INC281 282
#define MU_INC280 281
#define MU_INC279 280
#define MU_INC278 279
#define MU_INC277 278
#define MU_INC276 277
#define MU_INC275 276
#define MU_INC274 275
#define MU_INC273 274
#define MU_INC272 273
#define MU_INC271 272
#define MU_INC270 271
#define MU_INC269 270
#define MU_INC268 269
#define MU_INC267 268
#define MU_INC266 267
#define MU_INC265 266
#define MU_INC264 265
#define MU_INC263 264
#define MU_INC262 263
#define MU_INC261 262
#define MU_INC260 261
#define MU_INC259 260
#define MU_INC258 259
#define MU_INC257 258
#define MU_INC256 257
#define MU_INC255 256
#define MU_INC254 255
#define MU_INC253 254
#define MU_INC252 253
#define MU_INC251 252
#define MU_INC250 251
#define MU_INC249 250
#define MU_INC248 249
#define MU_INC247 248
#define MU_INC246 247
#define MU_INC245 246
#define MU_INC244 245
#define MU_INC243 244
#define MU_INC242 243
#define MU_INC241 242
#define MU_INC240 241
#define MU_INC239 240
#define MU_INC238 239
#define MU_INC237 238
#define MU_INC236 237
#define MU_INC235 236
#define MU_INC234 235
#define MU_INC233 234
#define MU_INC232 233
#define MU_INC231 232
#define MU_INC230 231
#define MU_INC229 230
#define MU_INC228 229
#define MU_INC227 228
#define MU_INC226 227
#define MU_INC225 226
#define MU_INC224 225
#define MU_INC223 224
#define MU_INC222 223
#define MU_INC221 222
#define MU_INC220 221
#define MU_INC219 220
#define MU_INC218 219
#define MU_INC217 218
#define MU_INC216 217
#define MU_INC215 216
#define MU_INC214 215
#define MU_INC213 214
#define MU_INC212 213
#define MU_INC211 212
#define MU_INC210 211
#define MU_INC209 210
#define MU_INC208 209
#define MU_INC207 208
#define MU_INC206 207
#define MU_INC205 206
#define MU_INC204 205
#define MU_INC203 204
#define MU_INC202 203
#define MU_INC201 202
#define MU_INC200 201
#define MU_INC199 200
#define MU_INC198 199
#define MU_INC197 198
#define MU_INC196 197
#define MU_INC195 196
#define MU_INC194 195
#define MU_INC193 194
#define MU_INC192 193
#define MU_INC191 192
#define MU_INC190 191
#define MU_INC189 190
#define MU_INC188 189
#define MU_INC187 188
#define MU_INC186 187
#define MU_INC185 186
#define MU_INC184 185
#define MU_INC183 184
#define MU_INC182 183
#define MU_INC181 182
#define MU_INC180 181
#define MU_INC179 180
#define MU_INC178 179
#define MU_INC177 178
#define MU_INC176 177
#define MU_INC175 176
#define MU_INC174 175
#define MU_INC173 174
#define MU_INC172 173
#define MU_INC171 172
#define MU_INC170 171
#define MU_INC169 170
#define MU_INC168 169
#define MU_INC167 168
#define MU_INC166 167
#define MU_INC165 166
#define MU_INC164 165
#define MU_INC163 164
#define MU_INC162 163
#define MU_INC161 162
#define MU_INC160 161
#define MU_INC159 160
#define MU_INC158 159
#define MU_INC157 158
#define MU_INC156 157
#define MU_INC155 156
#define MU_INC154 155
#define MU_INC153 154
#define MU_INC152 153
#define MU_INC151 152
#define MU_INC150 151
#define MU_INC149 150
#define MU_INC148 149
#define MU_INC147 148
#define MU_INC146 147
#define MU_INC145 146
#define MU_INC144 145
#define MU_INC143 144
#define MU_INC142 143
#define MU_INC141 142
#define MU_INC140 141
#define MU_INC139 140
#define MU_INC138 139
#define MU_INC137 138
#define MU_INC136 137
#define MU_INC135 136
#define MU_INC134 135
#define MU_INC133 134
#define MU_INC132 133
#define MU_INC131 132
#define MU_INC130 131
#define MU_INC129 130
#define MU_INC128 129
#define MU_INC127 128
#define MU_INC126 127
#define MU_INC125 126
#define MU_INC124 125
#define MU_INC123 124
#define MU_INC122 123
#define MU_INC121 122
#define MU_INC120 121
#define MU_INC119 120
#define MU_INC118 119
#define MU_INC117 118
#define MU_INC116 117
#define MU_INC115 116
#define MU_INC114 115
#define MU_INC113 114
#define MU_INC112 113
#define MU_INC111 112
#define MU_INC110 111
#define MU_INC109 110
#define MU_INC108 109
#define MU_INC107 108
#define MU_INC106 107
#define MU_INC105 106
#define MU_INC104 105
#define MU_INC103 104
#define MU_INC102 103
#define MU_INC101 102
#define MU_INC100 101
#define MU_INC99 100
#define MU_INC98 99
#define MU_INC97 98
#define MU_INC96 97
#define MU_INC95 96
#define MU_INC94 95
#define MU_INC93 94
#define MU_INC92 93
#define MU_INC91 92
#define MU_INC90 91
#define MU_INC89 90
#define MU_INC88 89
#define MU_INC87 88
#define MU_INC86 87
#define MU_INC85 86
#define MU_INC84 85
#define MU_INC83 84
#define MU_INC82 83
#define MU_INC81 82
#define MU_INC80 81
#define MU_INC79 80
#define MU_INC78 79
#define MU_INC77 78
#define MU_INC76 77
#define MU_INC75 76
#define MU_INC74 75
#define MU_INC73 74
#define MU_INC72 73
#define MU_INC71 72
#define MU_INC70 71
#define MU_INC69 70
#define MU_INC68 69
#define MU_INC67 68
#define MU_INC66 67
#define MU_INC65 66
#define MU_INC64 65
#define MU_INC63 64
#define MU_INC62 63
#define MU_INC61 62
#define MU_INC60 61
#define MU_INC59 60
#define MU_INC58 59
#define MU_INC57 58
#define MU_INC56 57
#define MU_INC55 56
#define MU_INC54 55
#define MU_INC53 54
#define MU_INC52 53
#define MU_INC51 52
#define MU_INC50 51
#define MU_INC49 50
#define MU_INC48 49
#define MU_INC47 48
#define MU_INC46 47
#define MU_INC45 46
#define MU_INC44 45
#define MU_INC43 44
#define MU_INC42 43
#define MU_INC41 42
#define MU_INC40 41
#define MU_INC39 40
#define MU_INC38 39
#define MU_INC37 38
#define MU_INC36 37
#define MU_INC35 36
#define MU_INC34 35
#define MU_INC33 34
#define MU_INC32 33
#define MU_INC31 32
#define MU_INC30 31
#define MU_INC29 30
#define MU_INC28 29
#define MU_INC27 28
#define MU_INC26 27
#define MU_INC25 26
#define MU_INC24 25
#define MU_INC23 24
#define MU_INC22 23
#define MU_INC21 22
#define MU_INC20 21
#define MU_INC19 20
#define MU_INC18 19
#define MU_INC17 18
#define MU_INC16 17
#define MU_INC15 16
#define MU_INC14 15
#define MU_INC13 14
#define MU_INC12 13
#define MU_INC11 12
#define MU_INC10 11
#define MU_INC9 10
#define MU_INC8 9
#define MU_INC7 8
#define MU_INC6 7
#define MU_INC5 6
#define MU_INC4 5
#define MU_INC3 4
#define MU_INC2 3
#define MU_INC1 2
#define MU_INC0 1

#define MU_DIV2(x) MU_C2(MU_DIV2_,x)

#define MU_DIV2_1024 512
#define MU_DIV2_1023 511
#define MU_DIV2_1022 511
#define MU_DIV2_1021 510
#define MU_DIV2_1020 510
#define MU_DIV2_1019 509
#define MU_DIV2_1018 509
#define MU_DIV2_1017 508
#define MU_DIV2_1016 508
#define MU_DIV2_1015 507
#define MU_DIV2_1014 507
#define MU_DIV2_1013 506
#define MU_DIV2_1012 506
#define MU_DIV2_1011 505
#define MU_DIV2_1010 505
#define MU_DIV2_1009 504
#define MU_DIV2_1008 504
#define MU_DIV2_1007 503
#define MU_DIV2_1006 503
#define MU_DIV2_1005 502
#define MU_DIV2_1004 502
#define MU_DIV2_1003 501
#define MU_DIV2_1002 501
#define MU_DIV2_1001 500
#define MU_DIV2_1000 500
#define MU_DIV2_999 499
#define MU_DIV2_998 499
#define MU_DIV2_997 498
#define MU_DIV2_996 498
#define MU_DIV2_995 497
#define MU_DIV2_994 497
#define MU_DIV2_993 496
#define MU_DIV2_992 496
#define MU_DIV2_991 495
#define MU_DIV2_990 495
#define MU_DIV2_989 494
#define MU_DIV2_988 494
#define MU_DIV2_987 493
#define MU_DIV2_986 493
#define MU_DIV2_985 492
#define MU_DIV2_984 492
#define MU_DIV2_983 491
#define MU_DIV2_982 491
#define MU_DIV2_981 490
#define MU_DIV2_980 490
#define MU_DIV2_979 489
#define MU_DIV2_978 489
#define MU_DIV2_977 488
#define MU_DIV2_976 488
#define MU_DIV2_975 487
#define MU_DIV2_974 487
#define MU_DIV2_973 486
#define MU_DIV2_972 486
#define MU_DIV2_971 485
#define MU_DIV2_970 485
#define MU_DIV2_969 484
#define MU_DIV2_968 484
#define MU_DIV2_967 483
#define MU_DIV2_966 483
#define MU_DIV2_965 482
#define MU_DIV2_964 482
#define MU_DIV2_963 481
#define MU_DIV2_962 481
#define MU_DIV2_961 480
#define MU_DIV2_960 480
#define MU_DIV2_959 479
#define MU_DIV2_958 479
#define MU_DIV2_957 478
#define MU_DIV2_956 478
#define MU_DIV2_955 477
#define MU_DIV2_954 477
#define MU_DIV2_953 476
#define MU_DIV2_952 476
#define MU_DIV2_951 475
#define MU_DIV2_950 475
#define MU_DIV2_949 474
#define MU_DIV2_948 474
#define MU_DIV2_947 473
#define MU_DIV2_946 473
#define MU_DIV2_945 472
#define MU_DIV2_944 472
#define MU_DIV2_943 471
#define MU_DIV2_942 471
#define MU_DIV2_941 470
#define MU_DIV2_940 470
#define MU_DIV2_939 469
#define MU_DIV2_938 469
#define MU_DIV2_937 468
#define MU_DIV2_936 468
#define MU_DIV2_935 467
#define MU_DIV2_934 467
#define MU_DIV2_933 466
#define MU_DIV2_932 466
#define MU_DIV2_931 465
#define MU_DIV2_930 465
#define MU_DIV2_929 464
#define MU_DIV2_928 464
#define MU_DIV2_927 463
#define MU_DIV2_926 463
#define MU_DIV2_925 462
#define MU_DIV2_924 462
#define MU_DIV2_923 461
#define MU_DIV2_922 461
#define MU_DIV2_921 460
#define MU_DIV2_920 460
#define MU_DIV2_919 459
#define MU_DIV2_918 459
#define MU_DIV2_917 458
#define MU_DIV2_916 458
#define MU_DIV2_915 457
#define MU_DIV2_914 457
#define MU_DIV2_913 456
#define MU_DIV2_912 456
#define MU_DIV2_911 455
#define MU_DIV2_910 455
#define MU_DIV2_909 454
#define MU_DIV2_908 454
#define MU_DIV2_907 453
#define MU_DIV2_906 453
#define MU_DIV2_905 452
#define MU_DIV2_904 452
#define MU_DIV2_903 451
#define MU_DIV2_902 451
#define MU_DIV2_901 450
#define MU_DIV2_900 450
#define MU_DIV2_899 449
#define MU_DIV2_898 449
#define MU_DIV2_897 448
#define MU_DIV2_896 448
#define MU_DIV2_895 447
#define MU_DIV2_894 447
#define MU_DIV2_893 446
#define MU_DIV2_892 446
#define MU_DIV2_891 445
#define MU_DIV2_890 445
#define MU_DIV2_889 444
#define MU_DIV2_888 444
#define MU_DIV2_887 443
#define MU_DIV2_886 443
#define MU_DIV2_885 442
#define MU_DIV2_884 442
#define MU_DIV2_883 441
#define MU_DIV2_882 441
#define MU_DIV2_881 440
#define MU_DIV2_880 440
#define MU_DIV2_879 439
#define MU_DIV2_878 439
#define MU_DIV2_877 438
#define MU_DIV2_876 438
#define MU_DIV2_875 437
#define MU_DIV2_874 437
#define MU_DIV2_873 436
#define MU_DIV2_872 436
#define MU_DIV2_871 435
#define MU_DIV2_870 435
#define MU_DIV2_869 434
#define MU_DIV2_868 434
#define MU_DIV2_867 433
#define MU_DIV2_866 433
#define MU_DIV2_865 432
#define MU_DIV2_864 432
#define MU_DIV2_863 431
#define MU_DIV2_862 431
#define MU_DIV2_861 430
#define MU_DIV2_860 430
#define MU_DIV2_859 429
#define MU_DIV2_858 429
#define MU_DIV2_857 428
#define MU_DIV2_856 428
#define MU_DIV2_855 427
#define MU_DIV2_854 427
#define MU_DIV2_853 426
#define MU_DIV2_852 426
#define MU_DIV2_851 425
#define MU_DIV2_850 425
#define MU_DIV2_849 424
#define MU_DIV2_848 424
#define MU_DIV2_847 423
#define MU_DIV2_846 423
#define MU_DIV2_845 422
#define MU_DIV2_844 422
#define MU_DIV2_843 421
#define MU_DIV2_842 421
#define MU_DIV2_841 420
#define MU_DIV2_840 420
#define MU_DIV2_839 419
#define MU_DIV2_838 419
#define MU_DIV2_837 418
#define MU_DIV2_836 418
#define MU_DIV2_835 417
#define MU_DIV2_834 417
#define MU_DIV2_833 416
#define MU_DIV2_832 416
#define MU_DIV2_831 415
#define MU_DIV2_830 415
#define MU_DIV2_829 414
#define MU_DIV2_828 414
#define MU_DIV2_827 413
#define MU_DIV2_826 413
#define MU_DIV2_825 412
#define MU_DIV2_824 412
#define MU_DIV2_823 411
#define MU_DIV2_822 411
#define MU_DIV2_821 410
#define MU_DIV2_820 410
#define MU_DIV2_819 409
#define MU_DIV2_818 409
#define MU_DIV2_817 408
#define MU_DIV2_816 408
#define MU_DIV2_815 407
#define MU_DIV2_814 407
#define MU_DIV2_813 406
#define MU_DIV2_812 406
#define MU_DIV2_811 405
#define MU_DIV2_810 405
#define MU_DIV2_809 404
#define MU_DIV2_808 404
#define MU_DIV2_807 403
#define MU_DIV2_806 403
#define MU_DIV2_805 402
#define MU_DIV2_804 402
#define MU_DIV2_803 401
#define MU_DIV2_802 401
#define MU_DIV2_801 400
#define MU_DIV2_800 400
#define MU_DIV2_799 399
#define MU_DIV2_798 399
#define MU_DIV2_797 398
#define MU_DIV2_796 398
#define MU_DIV2_795 397
#define MU_DIV2_794 397
#define MU_DIV2_793 396
#define MU_DIV2_792 396
#define MU_DIV2_791 395
#define MU_DIV2_790 395
#define MU_DIV2_789 394
#define MU_DIV2_788 394
#define MU_DIV2_787 393
#define MU_DIV2_786 393
#define MU_DIV2_785 392
#define MU_DIV2_784 392
#define MU_DIV2_783 391
#define MU_DIV2_782 391
#define MU_DIV2_781 390
#define MU_DIV2_780 390
#define MU_DIV2_779 389
#define MU_DIV2_778 389
#define MU_DIV2_777 388
#define MU_DIV2_776 388
#define MU_DIV2_775 387
#define MU_DIV2_774 387
#define MU_DIV2_773 386
#define MU_DIV2_772 386
#define MU_DIV2_771 385
#define MU_DIV2_770 385
#define MU_DIV2_769 384
#define MU_DIV2_768 384
#define MU_DIV2_767 383
#define MU_DIV2_766 383
#define MU_DIV2_765 382
#define MU_DIV2_764 382
#define MU_DIV2_763 381
#define MU_DIV2_762 381
#define MU_DIV2_761 380
#define MU_DIV2_760 380
#define MU_DIV2_759 379
#define MU_DIV2_758 379
#define MU_DIV2_757 378
#define MU_DIV2_756 378
#define MU_DIV2_755 377
#define MU_DIV2_754 377
#define MU_DIV2_753 376
#define MU_DIV2_752 376
#define MU_DIV2_751 375
#define MU_DIV2_750 375
#define MU_DIV2_749 374
#define MU_DIV2_748 374
#define MU_DIV2_747 373
#define MU_DIV2_746 373
#define MU_DIV2_745 372
#define MU_DIV2_744 372
#define MU_DIV2_743 371
#define MU_DIV2_742 371
#define MU_DIV2_741 370
#define MU_DIV2_740 370
#define MU_DIV2_739 369
#define MU_DIV2_738 369
#define MU_DIV2_737 368
#define MU_DIV2_736 368
#define MU_DIV2_735 367
#define MU_DIV2_734 367
#define MU_DIV2_733 366
#define MU_DIV2_732 366
#define MU_DIV2_731 365
#define MU_DIV2_730 365
#define MU_DIV2_729 364
#define MU_DIV2_728 364
#define MU_DIV2_727 363
#define MU_DIV2_726 363
#define MU_DIV2_725 362
#define MU_DIV2_724 362
#define MU_DIV2_723 361
#define MU_DIV2_722 361
#define MU_DIV2_721 360
#define MU_DIV2_720 360
#define MU_DIV2_719 359
#define MU_DIV2_718 359
#define MU_DIV2_717 358
#define MU_DIV2_716 358
#define MU_DIV2_715 357
#define MU_DIV2_714 357
#define MU_DIV2_713 356
#define MU_DIV2_712 356
#define MU_DIV2_711 355
#define MU_DIV2_710 355
#define MU_DIV2_709 354
#define MU_DIV2_708 354
#define MU_DIV2_707 353
#define MU_DIV2_706 353
#define MU_DIV2_705 352
#define MU_DIV2_704 352
#define MU_DIV2_703 351
#define MU_DIV2_702 351
#define MU_DIV2_701 350
#define MU_DIV2_700 350
#define MU_DIV2_699 349
#define MU_DIV2_698 349
#define MU_DIV2_697 348
#define MU_DIV2_696 348
#define MU_DIV2_695 347
#define MU_DIV2_694 347
#define MU_DIV2_693 346
#define MU_DIV2_692 346
#define MU_DIV2_691 345
#define MU_DIV2_690 345
#define MU_DIV2_689 344
#define MU_DIV2_688 344
#define MU_DIV2_687 343
#define MU_DIV2_686 343
#define MU_DIV2_685 342
#define MU_DIV2_684 342
#define MU_DIV2_683 341
#define MU_DIV2_682 341
#define MU_DIV2_681 340
#define MU_DIV2_680 340
#define MU_DIV2_679 339
#define MU_DIV2_678 339
#define MU_DIV2_677 338
#define MU_DIV2_676 338
#define MU_DIV2_675 337
#define MU_DIV2_674 337
#define MU_DIV2_673 336
#define MU_DIV2_672 336
#define MU_DIV2_671 335
#define MU_DIV2_670 335
#define MU_DIV2_669 334
#define MU_DIV2_668 334
#define MU_DIV2_667 333
#define MU_DIV2_666 333
#define MU_DIV2_665 332
#define MU_DIV2_664 332
#define MU_DIV2_663 331
#define MU_DIV2_662 331
#define MU_DIV2_661 330
#define MU_DIV2_660 330
#define MU_DIV2_659 329
#define MU_DIV2_658 329
#define MU_DIV2_657 328
#define MU_DIV2_656 328
#define MU_DIV2_655 327
#define MU_DIV2_654 327
#define MU_DIV2_653 326
#define MU_DIV2_652 326
#define MU_DIV2_651 325
#define MU_DIV2_650 325
#define MU_DIV2_649 324
#define MU_DIV2_648 324
#define MU_DIV2_647 323
#define MU_DIV2_646 323
#define MU_DIV2_645 322
#define MU_DIV2_644 322
#define MU_DIV2_643 321
#define MU_DIV2_642 321
#define MU_DIV2_641 320
#define MU_DIV2_640 320
#define MU_DIV2_639 319
#define MU_DIV2_638 319
#define MU_DIV2_637 318
#define MU_DIV2_636 318
#define MU_DIV2_635 317
#define MU_DIV2_634 317
#define MU_DIV2_633 316
#define MU_DIV2_632 316
#define MU_DIV2_631 315
#define MU_DIV2_630 315
#define MU_DIV2_629 314
#define MU_DIV2_628 314
#define MU_DIV2_627 313
#define MU_DIV2_626 313
#define MU_DIV2_625 312
#define MU_DIV2_624 312
#define MU_DIV2_623 311
#define MU_DIV2_622 311
#define MU_DIV2_621 310
#define MU_DIV2_620 310
#define MU_DIV2_619 309
#define MU_DIV2_618 309
#define MU_DIV2_617 308
#define MU_DIV2_616 308
#define MU_DIV2_615 307
#define MU_DIV2_614 307
#define MU_DIV2_613 306
#define MU_DIV2_612 306
#define MU_DIV2_611 305
#define MU_DIV2_610 305
#define MU_DIV2_609 304
#define MU_DIV2_608 304
#define MU_DIV2_607 303
#define MU_DIV2_606 303
#define MU_DIV2_605 302
#define MU_DIV2_604 302
#define MU_DIV2_603 301
#define MU_DIV2_602 301
#define MU_DIV2_601 300
#define MU_DIV2_600 300
#define MU_DIV2_599 299
#define MU_DIV2_598 299
#define MU_DIV2_597 298
#define MU_DIV2_596 298
#define MU_DIV2_595 297
#define MU_DIV2_594 297
#define MU_DIV2_593 296
#define MU_DIV2_592 296
#define MU_DIV2_591 295
#define MU_DIV2_590 295
#define MU_DIV2_589 294
#define MU_DIV2_588 294
#define MU_DIV2_587 293
#define MU_DIV2_586 293
#define MU_DIV2_585 292
#define MU_DIV2_584 292
#define MU_DIV2_583 291
#define MU_DIV2_582 291
#define MU_DIV2_581 290
#define MU_DIV2_580 290
#define MU_DIV2_579 289
#define MU_DIV2_578 289
#define MU_DIV2_577 288
#define MU_DIV2_576 288
#define MU_DIV2_575 287
#define MU_DIV2_574 287
#define MU_DIV2_573 286
#define MU_DIV2_572 286
#define MU_DIV2_571 285
#define MU_DIV2_570 285
#define MU_DIV2_569 284
#define MU_DIV2_568 284
#define MU_DIV2_567 283
#define MU_DIV2_566 283
#define MU_DIV2_565 282
#define MU_DIV2_564 282
#define MU_DIV2_563 281
#define MU_DIV2_562 281
#define MU_DIV2_561 280
#define MU_DIV2_560 280
#define MU_DIV2_559 279
#define MU_DIV2_558 279
#define MU_DIV2_557 278
#define MU_DIV2_556 278
#define MU_DIV2_555 277
#define MU_DIV2_554 277
#define MU_DIV2_553 276
#define MU_DIV2_552 276
#define MU_DIV2_551 275
#define MU_DIV2_550 275
#define MU_DIV2_549 274
#define MU_DIV2_548 274
#define MU_DIV2_547 273
#define MU_DIV2_546 273
#define MU_DIV2_545 272
#define MU_DIV2_544 272
#define MU_DIV2_543 271
#define MU_DIV2_542 271
#define MU_DIV2_541 270
#define MU_DIV2_540 270
#define MU_DIV2_539 269
#define MU_DIV2_538 269
#define MU_DIV2_537 268
#define MU_DIV2_536 268
#define MU_DIV2_535 267
#define MU_DIV2_534 267
#define MU_DIV2_533 266
#define MU_DIV2_532 266
#define MU_DIV2_531 265
#define MU_DIV2_530 265
#define MU_DIV2_529 264
#define MU_DIV2_528 264
#define MU_DIV2_527 263
#define MU_DIV2_526 263
#define MU_DIV2_525 262
#define MU_DIV2_524 262
#define MU_DIV2_523 261
#define MU_DIV2_522 261
#define MU_DIV2_521 260
#define MU_DIV2_520 260
#define MU_DIV2_519 259
#define MU_DIV2_518 259
#define MU_DIV2_517 258
#define MU_DIV2_516 258
#define MU_DIV2_515 257
#define MU_DIV2_514 257
#define MU_DIV2_513 256
#define MU_DIV2_512 256
#define MU_DIV2_511 255
#define MU_DIV2_510 255
#define MU_DIV2_509 254
#define MU_DIV2_508 254
#define MU_DIV2_507 253
#define MU_DIV2_506 253
#define MU_DIV2_505 252
#define MU_DIV2_504 252
#define MU_DIV2_503 251
#define MU_DIV2_502 251
#define MU_DIV2_501 250
#define MU_DIV2_500 250
#define MU_DIV2_499 249
#define MU_DIV2_498 249
#define MU_DIV2_497 248
#define MU_DIV2_496 248
#define MU_DIV2_495 247
#define MU_DIV2_494 247
#define MU_DIV2_493 246
#define MU_DIV2_492 246
#define MU_DIV2_491 245
#define MU_DIV2_490 245
#define MU_DIV2_489 244
#define MU_DIV2_488 244
#define MU_DIV2_487 243
#define MU_DIV2_486 243
#define MU_DIV2_485 242
#define MU_DIV2_484 242
#define MU_DIV2_483 241
#define MU_DIV2_482 241
#define MU_DIV2_481 240
#define MU_DIV2_480 240
#define MU_DIV2_479 239
#define MU_DIV2_478 239
#define MU_DIV2_477 238
#define MU_DIV2_476 238
#define MU_DIV2_475 237
#define MU_DIV2_474 237
#define MU_DIV2_473 236
#define MU_DIV2_472 236
#define MU_DIV2_471 235
#define MU_DIV2_470 235
#define MU_DIV2_469 234
#define MU_DIV2_468 234
#define MU_DIV2_467 233
#define MU_DIV2_466 233
#define MU_DIV2_465 232
#define MU_DIV2_464 232
#define MU_DIV2_463 231
#define MU_DIV2_462 231
#define MU_DIV2_461 230
#define MU_DIV2_460 230
#define MU_DIV2_459 229
#define MU_DIV2_458 229
#define MU_DIV2_457 228
#define MU_DIV2_456 228
#define MU_DIV2_455 227
#define MU_DIV2_454 227
#define MU_DIV2_453 226
#define MU_DIV2_452 226
#define MU_DIV2_451 225
#define MU_DIV2_450 225
#define MU_DIV2_449 224
#define MU_DIV2_448 224
#define MU_DIV2_447 223
#define MU_DIV2_446 223
#define MU_DIV2_445 222
#define MU_DIV2_444 222
#define MU_DIV2_443 221
#define MU_DIV2_442 221
#define MU_DIV2_441 220
#define MU_DIV2_440 220
#define MU_DIV2_439 219
#define MU_DIV2_438 219
#define MU_DIV2_437 218
#define MU_DIV2_436 218
#define MU_DIV2_435 217
#define MU_DIV2_434 217
#define MU_DIV2_433 216
#define MU_DIV2_432 216
#define MU_DIV2_431 215
#define MU_DIV2_430 215
#define MU_DIV2_429 214
#define MU_DIV2_428 214
#define MU_DIV2_427 213
#define MU_DIV2_426 213
#define MU_DIV2_425 212
#define MU_DIV2_424 212
#define MU_DIV2_423 211
#define MU_DIV2_422 211
#define MU_DIV2_421 210
#define MU_DIV2_420 210
#define MU_DIV2_419 209
#define MU_DIV2_418 209
#define MU_DIV2_417 208
#define MU_DIV2_416 208
#define MU_DIV2_415 207
#define MU_DIV2_414 207
#define MU_DIV2_413 206
#define MU_DIV2_412 206
#define MU_DIV2_411 205
#define MU_DIV2_410 205
#define MU_DIV2_409 204
#define MU_DIV2_408 204
#define MU_DIV2_407 203
#define MU_DIV2_406 203
#define MU_DIV2_405 202
#define MU_DIV2_404 202
#define MU_DIV2_403 201
#define MU_DIV2_402 201
#define MU_DIV2_401 200
#define MU_DIV2_400 200
#define MU_DIV2_399 199
#define MU_DIV2_398 199
#define MU_DIV2_397 198
#define MU_DIV2_396 198
#define MU_DIV2_395 197
#define MU_DIV2_394 197
#define MU_DIV2_393 196
#define MU_DIV2_392 196
#define MU_DIV2_391 195
#define MU_DIV2_390 195
#define MU_DIV2_389 194
#define MU_DIV2_388 194
#define MU_DIV2_387 193
#define MU_DIV2_386 193
#define MU_DIV2_385 192
#define MU_DIV2_384 192
#define MU_DIV2_383 191
#define MU_DIV2_382 191
#define MU_DIV2_381 190
#define MU_DIV2_380 190
#define MU_DIV2_379 189
#define MU_DIV2_378 189
#define MU_DIV2_377 188
#define MU_DIV2_376 188
#define MU_DIV2_375 187
#define MU_DIV2_374 187
#define MU_DIV2_373 186
#define MU_DIV2_372 186
#define MU_DIV2_371 185
#define MU_DIV2_370 185
#define MU_DIV2_369 184
#define MU_DIV2_368 184
#define MU_DIV2_367 183
#define MU_DIV2_366 183
#define MU_DIV2_365 182
#define MU_DIV2_364 182
#define MU_DIV2_363 181
#define MU_DIV2_362 181
#define MU_DIV2_361 180
#define MU_DIV2_360 180
#define MU_DIV2_359 179
#define MU_DIV2_358 179
#define MU_DIV2_357 178
#define MU_DIV2_356 178
#define MU_DIV2_355 177
#define MU_DIV2_354 177
#define MU_DIV2_353 176
#define MU_DIV2_352 176
#define MU_DIV2_351 175
#define MU_DIV2_350 175
#define MU_DIV2_349 174
#define MU_DIV2_348 174
#define MU_DIV2_347 173
#define MU_DIV2_346 173
#define MU_DIV2_345 172
#define MU_DIV2_344 172
#define MU_DIV2_343 171
#define MU_DIV2_342 171
#define MU_DIV2_341 170
#define MU_DIV2_340 170
#define MU_DIV2_339 169
#define MU_DIV2_338 169
#define MU_DIV2_337 168
#define MU_DIV2_336 168
#define MU_DIV2_335 167
#define MU_DIV2_334 167
#define MU_DIV2_333 166
#define MU_DIV2_332 166
#define MU_DIV2_331 165
#define MU_DIV2_330 165
#define MU_DIV2_329 164
#define MU_DIV2_328 164
#define MU_DIV2_327 163
#define MU_DIV2_326 163
#define MU_DIV2_325 162
#define MU_DIV2_324 162
#define MU_DIV2_323 161
#define MU_DIV2_322 161
#define MU_DIV2_321 160
#define MU_DIV2_320 160
#define MU_DIV2_319 159
#define MU_DIV2_318 159
#define MU_DIV2_317 158
#define MU_DIV2_316 158
#define MU_DIV2_315 157
#define MU_DIV2_314 157
#define MU_DIV2_313 156
#define MU_DIV2_312 156
#define MU_DIV2_311 155
#define MU_DIV2_310 155
#define MU_DIV2_309 154
#define MU_DIV2_308 154
#define MU_DIV2_307 153
#define MU_DIV2_306 153
#define MU_DIV2_305 152
#define MU_DIV2_304 152
#define MU_DIV2_303 151
#define MU_DIV2_302 151
#define MU_DIV2_301 150
#define MU_DIV2_300 150
#define MU_DIV2_299 149
#define MU_DIV2_298 149
#define MU_DIV2_297 148
#define MU_DIV2_296 148
#define MU_DIV2_295 147
#define MU_DIV2_294 147
#define MU_DIV2_293 146
#define MU_DIV2_292 146
#define MU_DIV2_291 145
#define MU_DIV2_290 145
#define MU_DIV2_289 144
#define MU_DIV2_288 144
#define MU_DIV2_287 143
#define MU_DIV2_286 143
#define MU_DIV2_285 142
#define MU_DIV2_284 142
#define MU_DIV2_283 141
#define MU_DIV2_282 141
#define MU_DIV2_281 140
#define MU_DIV2_280 140
#define MU_DIV2_279 139
#define MU_DIV2_278 139
#define MU_DIV2_277 138
#define MU_DIV2_276 138
#define MU_DIV2_275 137
#define MU_DIV2_274 137
#define MU_DIV2_273 136
#define MU_DIV2_272 136
#define MU_DIV2_271 135
#define MU_DIV2_270 135
#define MU_DIV2_269 134
#define MU_DIV2_268 134
#define MU_DIV2_267 133
#define MU_DIV2_266 133
#define MU_DIV2_265 132
#define MU_DIV2_264 132
#define MU_DIV2_263 131
#define MU_DIV2_262 131
#define MU_DIV2_261 130
#define MU_DIV2_260 130
#define MU_DIV2_259 129
#define MU_DIV2_258 129
#define MU_DIV2_257 128
#define MU_DIV2_256 128
#define MU_DIV2_255 127
#define MU_DIV2_254 127
#define MU_DIV2_253 126
#define MU_DIV2_252 126
#define MU_DIV2_251 125
#define MU_DIV2_250 125
#define MU_DIV2_249 124
#define MU_DIV2_248 124
#define MU_DIV2_247 123
#define MU_DIV2_246 123
#define MU_DIV2_245 122
#define MU_DIV2_244 122
#define MU_DIV2_243 121
#define MU_DIV2_242 121
#define MU_DIV2_241 120
#define MU_DIV2_240 120
#define MU_DIV2_239 119
#define MU_DIV2_238 119
#define MU_DIV2_237 118
#define MU_DIV2_236 118
#define MU_DIV2_235 117
#define MU_DIV2_234 117
#define MU_DIV2_233 116
#define MU_DIV2_232 116
#define MU_DIV2_231 115
#define MU_DIV2_230 115
#define MU_DIV2_229 114
#define MU_DIV2_228 114
#define MU_DIV2_227 113
#define MU_DIV2_226 113
#define MU_DIV2_225 112
#define MU_DIV2_224 112
#define MU_DIV2_223 111
#define MU_DIV2_222 111
#define MU_DIV2_221 110
#define MU_DIV2_220 110
#define MU_DIV2_219 109
#define MU_DIV2_218 109
#define MU_DIV2_217 108
#define MU_DIV2_216 108
#define MU_DIV2_215 107
#define MU_DIV2_214 107
#define MU_DIV2_213 106
#define MU_DIV2_212 106
#define MU_DIV2_211 105
#define MU_DIV2_210 105
#define MU_DIV2_209 104
#define MU_DIV2_208 104
#define MU_DIV2_207 103
#define MU_DIV2_206 103
#define MU_DIV2_205 102
#define MU_DIV2_204 102
#define MU_DIV2_203 101
#define MU_DIV2_202 101
#define MU_DIV2_201 100
#define MU_DIV2_200 100
#define MU_DIV2_199 99
#define MU_DIV2_198 99
#define MU_DIV2_197 98
#define MU_DIV2_196 98
#define MU_DIV2_195 97
#define MU_DIV2_194 97
#define MU_DIV2_193 96
#define MU_DIV2_192 96
#define MU_DIV2_191 95
#define MU_DIV2_190 95
#define MU_DIV2_189 94
#define MU_DIV2_188 94
#define MU_DIV2_187 93
#define MU_DIV2_186 93
#define MU_DIV2_185 92
#define MU_DIV2_184 92
#define MU_DIV2_183 91
#define MU_DIV2_182 91
#define MU_DIV2_181 90
#define MU_DIV2_180 90
#define MU_DIV2_179 89
#define MU_DIV2_178 89
#define MU_DIV2_177 88
#define MU_DIV2_176 88
#define MU_DIV2_175 87
#define MU_DIV2_174 87
#define MU_DIV2_173 86
#define MU_DIV2_172 86
#define MU_DIV2_171 85
#define MU_DIV2_170 85
#define MU_DIV2_169 84
#define MU_DIV2_168 84
#define MU_DIV2_167 83
#define MU_DIV2_166 83
#define MU_DIV2_165 82
#define MU_DIV2_164 82
#define MU_DIV2_163 81
#define MU_DIV2_162 81
#define MU_DIV2_161 80
#define MU_DIV2_160 80
#define MU_DIV2_159 79
#define MU_DIV2_158 79
#define MU_DIV2_157 78
#define MU_DIV2_156 78
#define MU_DIV2_155 77
#define MU_DIV2_154 77
#define MU_DIV2_153 76
#define MU_DIV2_152 76
#define MU_DIV2_151 75
#define MU_DIV2_150 75
#define MU_DIV2_149 74
#define MU_DIV2_148 74
#define MU_DIV2_147 73
#define MU_DIV2_146 73
#define MU_DIV2_145 72
#define MU_DIV2_144 72
#define MU_DIV2_143 71
#define MU_DIV2_142 71
#define MU_DIV2_141 70
#define MU_DIV2_140 70
#define MU_DIV2_139 69
#define MU_DIV2_138 69
#define MU_DIV2_137 68
#define MU_DIV2_136 68
#define MU_DIV2_135 67
#define MU_DIV2_134 67
#define MU_DIV2_133 66
#define MU_DIV2_132 66
#define MU_DIV2_131 65
#define MU_DIV2_130 65
#define MU_DIV2_129 64
#define MU_DIV2_128 64
#define MU_DIV2_127 63
#define MU_DIV2_126 63
#define MU_DIV2_125 62
#define MU_DIV2_124 62
#define MU_DIV2_123 61
#define MU_DIV2_122 61
#define MU_DIV2_121 60
#define MU_DIV2_120 60
#define MU_DIV2_119 59
#define MU_DIV2_118 59
#define MU_DIV2_117 58
#define MU_DIV2_116 58
#define MU_DIV2_115 57
#define MU_DIV2_114 57
#define MU_DIV2_113 56
#define MU_DIV2_112 56
#define MU_DIV2_111 55
#define MU_DIV2_110 55
#define MU_DIV2_109 54
#define MU_DIV2_108 54
#define MU_DIV2_107 53
#define MU_DIV2_106 53
#define MU_DIV2_105 52
#define MU_DIV2_104 52
#define MU_DIV2_103 51
#define MU_DIV2_102 51
#define MU_DIV2_101 50
#define MU_DIV2_100 50
#define MU_DIV2_99 49
#define MU_DIV2_98 49
#define MU_DIV2_97 48
#define MU_DIV2_96 48
#define MU_DIV2_95 47
#define MU_DIV2_94 47
#define MU_DIV2_93 46
#define MU_DIV2_92 46
#define MU_DIV2_91 45
#define MU_DIV2_90 45
#define MU_DIV2_89 44
#define MU_DIV2_88 44
#define MU_DIV2_87 43
#define MU_DIV2_86 43
#define MU_DIV2_85 42
#define MU_DIV2_84 42
#define MU_DIV2_83 41
#define MU_DIV2_82 41
#define MU_DIV2_81 40
#define MU_DIV2_80 40
#define MU_DIV2_79 39
#define MU_DIV2_78 39
#define MU_DIV2_77 38
#define MU_DIV2_76 38
#define MU_DIV2_75 37
#define MU_DIV2_74 37
#define MU_DIV2_73 36
#define MU_DIV2_72 36
#define MU_DIV2_71 35
#define MU_DIV2_70 35
#define MU_DIV2_69 34
#define MU_DIV2_68 34
#define MU_DIV2_67 33
#define MU_DIV2_66 33
#define MU_DIV2_65 32
#define MU_DIV2_64 32
#define MU_DIV2_63 31
#define MU_DIV2_62 31
#define MU_DIV2_61 30
#define MU_DIV2_60 30
#define MU_DIV2_59 29
#define MU_DIV2_58 29
#define MU_DIV2_57 28
#define MU_DIV2_56 28
#define MU_DIV2_55 27
#define MU_DIV2_54 27
#define MU_DIV2_53 26
#define MU_DIV2_52 26
#define MU_DIV2_51 25
#define MU_DIV2_50 25
#define MU_DIV2_49 24
#define MU_DIV2_48 24
#define MU_DIV2_47 23
#define MU_DIV2_46 23
#define MU_DIV2_45 22
#define MU_DIV2_44 22
#define MU_DIV2_43 21
#define MU_DIV2_42 21
#define MU_DIV2_41 20
#define MU_DIV2_40 20
#define MU_DIV2_39 19
#define MU_DIV2_38 19
#define MU_DIV2_37 18
#define MU_DIV2_36 18
#define MU_DIV2_35 17
#define MU_DIV2_34 17
#define MU_DIV2_33 16
#define MU_DIV2_32 16
#define MU_DIV2_31 15
#define MU_DIV2_30 15
#define MU_DIV2_29 14
#define MU_DIV2_28 14
#define MU_DIV2_27 13
#define MU_DIV2_26 13
#define MU_DIV2_25 12
#define MU_DIV2_24 12
#define MU_DIV2_23 11
#define MU_DIV2_22 11
#define MU_DIV2_21 10
#define MU_DIV2_20 10
#define MU_DIV2_19 9
#define MU_DIV2_18 9
#define MU_DIV2_17 8
#define MU_DIV2_16 8
#define MU_DIV2_15 7
#define MU_DIV2_14 7
#define MU_DIV2_13 6
#define MU_DIV2_12 6
#define MU_DIV2_11 5
#define MU_DIV2_10 5
#define MU_DIV2_9 4
#define MU_DIV2_8 4
#define MU_DIV2_7 3
#define MU_DIV2_6 3
#define MU_DIV2_5 2
#define MU_DIV2_4 2
#define MU_DIV2_3 1
#define MU_DIV2_2 1
#define MU_DIV2_1 0
#define MU_DIV2_0 0

#define MU_MOD2(x) MU_C2(MU_MOD2_,x)
#define MU_MOD2_1024 0
#define MU_MOD2_1023 1
#define MU_MOD2_1022 0
#define MU_MOD2_1021 1
#define MU_MOD2_1020 0
#define MU_MOD2_1019 1
#define MU_MOD2_1018 0
#define MU_MOD2_1017 1
#define MU_MOD2_1016 0
#define MU_MOD2_1015 1
#define MU_MOD2_1014 0
#define MU_MOD2_1013 1
#define MU_MOD2_1012 0
#define MU_MOD2_1011 1
#define MU_MOD2_1010 0
#define MU_MOD2_1009 1
#define MU_MOD2_1008 0
#define MU_MOD2_1007 1
#define MU_MOD2_1006 0
#define MU_MOD2_1005 1
#define MU_MOD2_1004 0
#define MU_MOD2_1003 1
#define MU_MOD2_1002 0
#define MU_MOD2_1001 1
#define MU_MOD2_1000 0
#define MU_MOD2_999 1
#define MU_MOD2_998 0
#define MU_MOD2_997 1
#define MU_MOD2_996 0
#define MU_MOD2_995 1
#define MU_MOD2_994 0
#define MU_MOD2_993 1
#define MU_MOD2_992 0
#define MU_MOD2_991 1
#define MU_MOD2_990 0
#define MU_MOD2_989 1
#define MU_MOD2_988 0
#define MU_MOD2_987 1
#define MU_MOD2_986 0
#define MU_MOD2_985 1
#define MU_MOD2_984 0
#define MU_MOD2_983 1
#define MU_MOD2_982 0
#define MU_MOD2_981 1
#define MU_MOD2_980 0
#define MU_MOD2_979 1
#define MU_MOD2_978 0
#define MU_MOD2_977 1
#define MU_MOD2_976 0
#define MU_MOD2_975 1
#define MU_MOD2_974 0
#define MU_MOD2_973 1
#define MU_MOD2_972 0
#define MU_MOD2_971 1
#define MU_MOD2_970 0
#define MU_MOD2_969 1
#define MU_MOD2_968 0
#define MU_MOD2_967 1
#define MU_MOD2_966 0
#define MU_MOD2_965 1
#define MU_MOD2_964 0
#define MU_MOD2_963 1
#define MU_MOD2_962 0
#define MU_MOD2_961 1
#define MU_MOD2_960 0
#define MU_MOD2_959 1
#define MU_MOD2_958 0
#define MU_MOD2_957 1
#define MU_MOD2_956 0
#define MU_MOD2_955 1
#define MU_MOD2_954 0
#define MU_MOD2_953 1
#define MU_MOD2_952 0
#define MU_MOD2_951 1
#define MU_MOD2_950 0
#define MU_MOD2_949 1
#define MU_MOD2_948 0
#define MU_MOD2_947 1
#define MU_MOD2_946 0
#define MU_MOD2_945 1
#define MU_MOD2_944 0
#define MU_MOD2_943 1
#define MU_MOD2_942 0
#define MU_MOD2_941 1
#define MU_MOD2_940 0
#define MU_MOD2_939 1
#define MU_MOD2_938 0
#define MU_MOD2_937 1
#define MU_MOD2_936 0
#define MU_MOD2_935 1
#define MU_MOD2_934 0
#define MU_MOD2_933 1
#define MU_MOD2_932 0
#define MU_MOD2_931 1
#define MU_MOD2_930 0
#define MU_MOD2_929 1
#define MU_MOD2_928 0
#define MU_MOD2_927 1
#define MU_MOD2_926 0
#define MU_MOD2_925 1
#define MU_MOD2_924 0
#define MU_MOD2_923 1
#define MU_MOD2_922 0
#define MU_MOD2_921 1
#define MU_MOD2_920 0
#define MU_MOD2_919 1
#define MU_MOD2_918 0
#define MU_MOD2_917 1
#define MU_MOD2_916 0
#define MU_MOD2_915 1
#define MU_MOD2_914 0
#define MU_MOD2_913 1
#define MU_MOD2_912 0
#define MU_MOD2_911 1
#define MU_MOD2_910 0
#define MU_MOD2_909 1
#define MU_MOD2_908 0
#define MU_MOD2_907 1
#define MU_MOD2_906 0
#define MU_MOD2_905 1
#define MU_MOD2_904 0
#define MU_MOD2_903 1
#define MU_MOD2_902 0
#define MU_MOD2_901 1
#define MU_MOD2_900 0
#define MU_MOD2_899 1
#define MU_MOD2_898 0
#define MU_MOD2_897 1
#define MU_MOD2_896 0
#define MU_MOD2_895 1
#define MU_MOD2_894 0
#define MU_MOD2_893 1
#define MU_MOD2_892 0
#define MU_MOD2_891 1
#define MU_MOD2_890 0
#define MU_MOD2_889 1
#define MU_MOD2_888 0
#define MU_MOD2_887 1
#define MU_MOD2_886 0
#define MU_MOD2_885 1
#define MU_MOD2_884 0
#define MU_MOD2_883 1
#define MU_MOD2_882 0
#define MU_MOD2_881 1
#define MU_MOD2_880 0
#define MU_MOD2_879 1
#define MU_MOD2_878 0
#define MU_MOD2_877 1
#define MU_MOD2_876 0
#define MU_MOD2_875 1
#define MU_MOD2_874 0
#define MU_MOD2_873 1
#define MU_MOD2_872 0
#define MU_MOD2_871 1
#define MU_MOD2_870 0
#define MU_MOD2_869 1
#define MU_MOD2_868 0
#define MU_MOD2_867 1
#define MU_MOD2_866 0
#define MU_MOD2_865 1
#define MU_MOD2_864 0
#define MU_MOD2_863 1
#define MU_MOD2_862 0
#define MU_MOD2_861 1
#define MU_MOD2_860 0
#define MU_MOD2_859 1
#define MU_MOD2_858 0
#define MU_MOD2_857 1
#define MU_MOD2_856 0
#define MU_MOD2_855 1
#define MU_MOD2_854 0
#define MU_MOD2_853 1
#define MU_MOD2_852 0
#define MU_MOD2_851 1
#define MU_MOD2_850 0
#define MU_MOD2_849 1
#define MU_MOD2_848 0
#define MU_MOD2_847 1
#define MU_MOD2_846 0
#define MU_MOD2_845 1
#define MU_MOD2_844 0
#define MU_MOD2_843 1
#define MU_MOD2_842 0
#define MU_MOD2_841 1
#define MU_MOD2_840 0
#define MU_MOD2_839 1
#define MU_MOD2_838 0
#define MU_MOD2_837 1
#define MU_MOD2_836 0
#define MU_MOD2_835 1
#define MU_MOD2_834 0
#define MU_MOD2_833 1
#define MU_MOD2_832 0
#define MU_MOD2_831 1
#define MU_MOD2_830 0
#define MU_MOD2_829 1
#define MU_MOD2_828 0
#define MU_MOD2_827 1
#define MU_MOD2_826 0
#define MU_MOD2_825 1
#define MU_MOD2_824 0
#define MU_MOD2_823 1
#define MU_MOD2_822 0
#define MU_MOD2_821 1
#define MU_MOD2_820 0
#define MU_MOD2_819 1
#define MU_MOD2_818 0
#define MU_MOD2_817 1
#define MU_MOD2_816 0
#define MU_MOD2_815 1
#define MU_MOD2_814 0
#define MU_MOD2_813 1
#define MU_MOD2_812 0
#define MU_MOD2_811 1
#define MU_MOD2_810 0
#define MU_MOD2_809 1
#define MU_MOD2_808 0
#define MU_MOD2_807 1
#define MU_MOD2_806 0
#define MU_MOD2_805 1
#define MU_MOD2_804 0
#define MU_MOD2_803 1
#define MU_MOD2_802 0
#define MU_MOD2_801 1
#define MU_MOD2_800 0
#define MU_MOD2_799 1
#define MU_MOD2_798 0
#define MU_MOD2_797 1
#define MU_MOD2_796 0
#define MU_MOD2_795 1
#define MU_MOD2_794 0
#define MU_MOD2_793 1
#define MU_MOD2_792 0
#define MU_MOD2_791 1
#define MU_MOD2_790 0
#define MU_MOD2_789 1
#define MU_MOD2_788 0
#define MU_MOD2_787 1
#define MU_MOD2_786 0
#define MU_MOD2_785 1
#define MU_MOD2_784 0
#define MU_MOD2_783 1
#define MU_MOD2_782 0
#define MU_MOD2_781 1
#define MU_MOD2_780 0
#define MU_MOD2_779 1
#define MU_MOD2_778 0
#define MU_MOD2_777 1
#define MU_MOD2_776 0
#define MU_MOD2_775 1
#define MU_MOD2_774 0
#define MU_MOD2_773 1
#define MU_MOD2_772 0
#define MU_MOD2_771 1
#define MU_MOD2_770 0
#define MU_MOD2_769 1
#define MU_MOD2_768 0
#define MU_MOD2_767 1
#define MU_MOD2_766 0
#define MU_MOD2_765 1
#define MU_MOD2_764 0
#define MU_MOD2_763 1
#define MU_MOD2_762 0
#define MU_MOD2_761 1
#define MU_MOD2_760 0
#define MU_MOD2_759 1
#define MU_MOD2_758 0
#define MU_MOD2_757 1
#define MU_MOD2_756 0
#define MU_MOD2_755 1
#define MU_MOD2_754 0
#define MU_MOD2_753 1
#define MU_MOD2_752 0
#define MU_MOD2_751 1
#define MU_MOD2_750 0
#define MU_MOD2_749 1
#define MU_MOD2_748 0
#define MU_MOD2_747 1
#define MU_MOD2_746 0
#define MU_MOD2_745 1
#define MU_MOD2_744 0
#define MU_MOD2_743 1
#define MU_MOD2_742 0
#define MU_MOD2_741 1
#define MU_MOD2_740 0
#define MU_MOD2_739 1
#define MU_MOD2_738 0
#define MU_MOD2_737 1
#define MU_MOD2_736 0
#define MU_MOD2_735 1
#define MU_MOD2_734 0
#define MU_MOD2_733 1
#define MU_MOD2_732 0
#define MU_MOD2_731 1
#define MU_MOD2_730 0
#define MU_MOD2_729 1
#define MU_MOD2_728 0
#define MU_MOD2_727 1
#define MU_MOD2_726 0
#define MU_MOD2_725 1
#define MU_MOD2_724 0
#define MU_MOD2_723 1
#define MU_MOD2_722 0
#define MU_MOD2_721 1
#define MU_MOD2_720 0
#define MU_MOD2_719 1
#define MU_MOD2_718 0
#define MU_MOD2_717 1
#define MU_MOD2_716 0
#define MU_MOD2_715 1
#define MU_MOD2_714 0
#define MU_MOD2_713 1
#define MU_MOD2_712 0
#define MU_MOD2_711 1
#define MU_MOD2_710 0
#define MU_MOD2_709 1
#define MU_MOD2_708 0
#define MU_MOD2_707 1
#define MU_MOD2_706 0
#define MU_MOD2_705 1
#define MU_MOD2_704 0
#define MU_MOD2_703 1
#define MU_MOD2_702 0
#define MU_MOD2_701 1
#define MU_MOD2_700 0
#define MU_MOD2_699 1
#define MU_MOD2_698 0
#define MU_MOD2_697 1
#define MU_MOD2_696 0
#define MU_MOD2_695 1
#define MU_MOD2_694 0
#define MU_MOD2_693 1
#define MU_MOD2_692 0
#define MU_MOD2_691 1
#define MU_MOD2_690 0
#define MU_MOD2_689 1
#define MU_MOD2_688 0
#define MU_MOD2_687 1
#define MU_MOD2_686 0
#define MU_MOD2_685 1
#define MU_MOD2_684 0
#define MU_MOD2_683 1
#define MU_MOD2_682 0
#define MU_MOD2_681 1
#define MU_MOD2_680 0
#define MU_MOD2_679 1
#define MU_MOD2_678 0
#define MU_MOD2_677 1
#define MU_MOD2_676 0
#define MU_MOD2_675 1
#define MU_MOD2_674 0
#define MU_MOD2_673 1
#define MU_MOD2_672 0
#define MU_MOD2_671 1
#define MU_MOD2_670 0
#define MU_MOD2_669 1
#define MU_MOD2_668 0
#define MU_MOD2_667 1
#define MU_MOD2_666 0
#define MU_MOD2_665 1
#define MU_MOD2_664 0
#define MU_MOD2_663 1
#define MU_MOD2_662 0
#define MU_MOD2_661 1
#define MU_MOD2_660 0
#define MU_MOD2_659 1
#define MU_MOD2_658 0
#define MU_MOD2_657 1
#define MU_MOD2_656 0
#define MU_MOD2_655 1
#define MU_MOD2_654 0
#define MU_MOD2_653 1
#define MU_MOD2_652 0
#define MU_MOD2_651 1
#define MU_MOD2_650 0
#define MU_MOD2_649 1
#define MU_MOD2_648 0
#define MU_MOD2_647 1
#define MU_MOD2_646 0
#define MU_MOD2_645 1
#define MU_MOD2_644 0
#define MU_MOD2_643 1
#define MU_MOD2_642 0
#define MU_MOD2_641 1
#define MU_MOD2_640 0
#define MU_MOD2_639 1
#define MU_MOD2_638 0
#define MU_MOD2_637 1
#define MU_MOD2_636 0
#define MU_MOD2_635 1
#define MU_MOD2_634 0
#define MU_MOD2_633 1
#define MU_MOD2_632 0
#define MU_MOD2_631 1
#define MU_MOD2_630 0
#define MU_MOD2_629 1
#define MU_MOD2_628 0
#define MU_MOD2_627 1
#define MU_MOD2_626 0
#define MU_MOD2_625 1
#define MU_MOD2_624 0
#define MU_MOD2_623 1
#define MU_MOD2_622 0
#define MU_MOD2_621 1
#define MU_MOD2_620 0
#define MU_MOD2_619 1
#define MU_MOD2_618 0
#define MU_MOD2_617 1
#define MU_MOD2_616 0
#define MU_MOD2_615 1
#define MU_MOD2_614 0
#define MU_MOD2_613 1
#define MU_MOD2_612 0
#define MU_MOD2_611 1
#define MU_MOD2_610 0
#define MU_MOD2_609 1
#define MU_MOD2_608 0
#define MU_MOD2_607 1
#define MU_MOD2_606 0
#define MU_MOD2_605 1
#define MU_MOD2_604 0
#define MU_MOD2_603 1
#define MU_MOD2_602 0
#define MU_MOD2_601 1
#define MU_MOD2_600 0
#define MU_MOD2_599 1
#define MU_MOD2_598 0
#define MU_MOD2_597 1
#define MU_MOD2_596 0
#define MU_MOD2_595 1
#define MU_MOD2_594 0
#define MU_MOD2_593 1
#define MU_MOD2_592 0
#define MU_MOD2_591 1
#define MU_MOD2_590 0
#define MU_MOD2_589 1
#define MU_MOD2_588 0
#define MU_MOD2_587 1
#define MU_MOD2_586 0
#define MU_MOD2_585 1
#define MU_MOD2_584 0
#define MU_MOD2_583 1
#define MU_MOD2_582 0
#define MU_MOD2_581 1
#define MU_MOD2_580 0
#define MU_MOD2_579 1
#define MU_MOD2_578 0
#define MU_MOD2_577 1
#define MU_MOD2_576 0
#define MU_MOD2_575 1
#define MU_MOD2_574 0
#define MU_MOD2_573 1
#define MU_MOD2_572 0
#define MU_MOD2_571 1
#define MU_MOD2_570 0
#define MU_MOD2_569 1
#define MU_MOD2_568 0
#define MU_MOD2_567 1
#define MU_MOD2_566 0
#define MU_MOD2_565 1
#define MU_MOD2_564 0
#define MU_MOD2_563 1
#define MU_MOD2_562 0
#define MU_MOD2_561 1
#define MU_MOD2_560 0
#define MU_MOD2_559 1
#define MU_MOD2_558 0
#define MU_MOD2_557 1
#define MU_MOD2_556 0
#define MU_MOD2_555 1
#define MU_MOD2_554 0
#define MU_MOD2_553 1
#define MU_MOD2_552 0
#define MU_MOD2_551 1
#define MU_MOD2_550 0
#define MU_MOD2_549 1
#define MU_MOD2_548 0
#define MU_MOD2_547 1
#define MU_MOD2_546 0
#define MU_MOD2_545 1
#define MU_MOD2_544 0
#define MU_MOD2_543 1
#define MU_MOD2_542 0
#define MU_MOD2_541 1
#define MU_MOD2_540 0
#define MU_MOD2_539 1
#define MU_MOD2_538 0
#define MU_MOD2_537 1
#define MU_MOD2_536 0
#define MU_MOD2_535 1
#define MU_MOD2_534 0
#define MU_MOD2_533 1
#define MU_MOD2_532 0
#define MU_MOD2_531 1
#define MU_MOD2_530 0
#define MU_MOD2_529 1
#define MU_MOD2_528 0
#define MU_MOD2_527 1
#define MU_MOD2_526 0
#define MU_MOD2_525 1
#define MU_MOD2_524 0
#define MU_MOD2_523 1
#define MU_MOD2_522 0
#define MU_MOD2_521 1
#define MU_MOD2_520 0
#define MU_MOD2_519 1
#define MU_MOD2_518 0
#define MU_MOD2_517 1
#define MU_MOD2_516 0
#define MU_MOD2_515 1
#define MU_MOD2_514 0
#define MU_MOD2_513 1
#define MU_MOD2_512 0
#define MU_MOD2_511 1
#define MU_MOD2_510 0
#define MU_MOD2_509 1
#define MU_MOD2_508 0
#define MU_MOD2_507 1
#define MU_MOD2_506 0
#define MU_MOD2_505 1
#define MU_MOD2_504 0
#define MU_MOD2_503 1
#define MU_MOD2_502 0
#define MU_MOD2_501 1
#define MU_MOD2_500 0
#define MU_MOD2_499 1
#define MU_MOD2_498 0
#define MU_MOD2_497 1
#define MU_MOD2_496 0
#define MU_MOD2_495 1
#define MU_MOD2_494 0
#define MU_MOD2_493 1
#define MU_MOD2_492 0
#define MU_MOD2_491 1
#define MU_MOD2_490 0
#define MU_MOD2_489 1
#define MU_MOD2_488 0
#define MU_MOD2_487 1
#define MU_MOD2_486 0
#define MU_MOD2_485 1
#define MU_MOD2_484 0
#define MU_MOD2_483 1
#define MU_MOD2_482 0
#define MU_MOD2_481 1
#define MU_MOD2_480 0
#define MU_MOD2_479 1
#define MU_MOD2_478 0
#define MU_MOD2_477 1
#define MU_MOD2_476 0
#define MU_MOD2_475 1
#define MU_MOD2_474 0
#define MU_MOD2_473 1
#define MU_MOD2_472 0
#define MU_MOD2_471 1
#define MU_MOD2_470 0
#define MU_MOD2_469 1
#define MU_MOD2_468 0
#define MU_MOD2_467 1
#define MU_MOD2_466 0
#define MU_MOD2_465 1
#define MU_MOD2_464 0
#define MU_MOD2_463 1
#define MU_MOD2_462 0
#define MU_MOD2_461 1
#define MU_MOD2_460 0
#define MU_MOD2_459 1
#define MU_MOD2_458 0
#define MU_MOD2_457 1
#define MU_MOD2_456 0
#define MU_MOD2_455 1
#define MU_MOD2_454 0
#define MU_MOD2_453 1
#define MU_MOD2_452 0
#define MU_MOD2_451 1
#define MU_MOD2_450 0
#define MU_MOD2_449 1
#define MU_MOD2_448 0
#define MU_MOD2_447 1
#define MU_MOD2_446 0
#define MU_MOD2_445 1
#define MU_MOD2_444 0
#define MU_MOD2_443 1
#define MU_MOD2_442 0
#define MU_MOD2_441 1
#define MU_MOD2_440 0
#define MU_MOD2_439 1
#define MU_MOD2_438 0
#define MU_MOD2_437 1
#define MU_MOD2_436 0
#define MU_MOD2_435 1
#define MU_MOD2_434 0
#define MU_MOD2_433 1
#define MU_MOD2_432 0
#define MU_MOD2_431 1
#define MU_MOD2_430 0
#define MU_MOD2_429 1
#define MU_MOD2_428 0
#define MU_MOD2_427 1
#define MU_MOD2_426 0
#define MU_MOD2_425 1
#define MU_MOD2_424 0
#define MU_MOD2_423 1
#define MU_MOD2_422 0
#define MU_MOD2_421 1
#define MU_MOD2_420 0
#define MU_MOD2_419 1
#define MU_MOD2_418 0
#define MU_MOD2_417 1
#define MU_MOD2_416 0
#define MU_MOD2_415 1
#define MU_MOD2_414 0
#define MU_MOD2_413 1
#define MU_MOD2_412 0
#define MU_MOD2_411 1
#define MU_MOD2_410 0
#define MU_MOD2_409 1
#define MU_MOD2_408 0
#define MU_MOD2_407 1
#define MU_MOD2_406 0
#define MU_MOD2_405 1
#define MU_MOD2_404 0
#define MU_MOD2_403 1
#define MU_MOD2_402 0
#define MU_MOD2_401 1
#define MU_MOD2_400 0
#define MU_MOD2_399 1
#define MU_MOD2_398 0
#define MU_MOD2_397 1
#define MU_MOD2_396 0
#define MU_MOD2_395 1
#define MU_MOD2_394 0
#define MU_MOD2_393 1
#define MU_MOD2_392 0
#define MU_MOD2_391 1
#define MU_MOD2_390 0
#define MU_MOD2_389 1
#define MU_MOD2_388 0
#define MU_MOD2_387 1
#define MU_MOD2_386 0
#define MU_MOD2_385 1
#define MU_MOD2_384 0
#define MU_MOD2_383 1
#define MU_MOD2_382 0
#define MU_MOD2_381 1
#define MU_MOD2_380 0
#define MU_MOD2_379 1
#define MU_MOD2_378 0
#define MU_MOD2_377 1
#define MU_MOD2_376 0
#define MU_MOD2_375 1
#define MU_MOD2_374 0
#define MU_MOD2_373 1
#define MU_MOD2_372 0
#define MU_MOD2_371 1
#define MU_MOD2_370 0
#define MU_MOD2_369 1
#define MU_MOD2_368 0
#define MU_MOD2_367 1
#define MU_MOD2_366 0
#define MU_MOD2_365 1
#define MU_MOD2_364 0
#define MU_MOD2_363 1
#define MU_MOD2_362 0
#define MU_MOD2_361 1
#define MU_MOD2_360 0
#define MU_MOD2_359 1
#define MU_MOD2_358 0
#define MU_MOD2_357 1
#define MU_MOD2_356 0
#define MU_MOD2_355 1
#define MU_MOD2_354 0
#define MU_MOD2_353 1
#define MU_MOD2_352 0
#define MU_MOD2_351 1
#define MU_MOD2_350 0
#define MU_MOD2_349 1
#define MU_MOD2_348 0
#define MU_MOD2_347 1
#define MU_MOD2_346 0
#define MU_MOD2_345 1
#define MU_MOD2_344 0
#define MU_MOD2_343 1
#define MU_MOD2_342 0
#define MU_MOD2_341 1
#define MU_MOD2_340 0
#define MU_MOD2_339 1
#define MU_MOD2_338 0
#define MU_MOD2_337 1
#define MU_MOD2_336 0
#define MU_MOD2_335 1
#define MU_MOD2_334 0
#define MU_MOD2_333 1
#define MU_MOD2_332 0
#define MU_MOD2_331 1
#define MU_MOD2_330 0
#define MU_MOD2_329 1
#define MU_MOD2_328 0
#define MU_MOD2_327 1
#define MU_MOD2_326 0
#define MU_MOD2_325 1
#define MU_MOD2_324 0
#define MU_MOD2_323 1
#define MU_MOD2_322 0
#define MU_MOD2_321 1
#define MU_MOD2_320 0
#define MU_MOD2_319 1
#define MU_MOD2_318 0
#define MU_MOD2_317 1
#define MU_MOD2_316 0
#define MU_MOD2_315 1
#define MU_MOD2_314 0
#define MU_MOD2_313 1
#define MU_MOD2_312 0
#define MU_MOD2_311 1
#define MU_MOD2_310 0
#define MU_MOD2_309 1
#define MU_MOD2_308 0
#define MU_MOD2_307 1
#define MU_MOD2_306 0
#define MU_MOD2_305 1
#define MU_MOD2_304 0
#define MU_MOD2_303 1
#define MU_MOD2_302 0
#define MU_MOD2_301 1
#define MU_MOD2_300 0
#define MU_MOD2_299 1
#define MU_MOD2_298 0
#define MU_MOD2_297 1
#define MU_MOD2_296 0
#define MU_MOD2_295 1
#define MU_MOD2_294 0
#define MU_MOD2_293 1
#define MU_MOD2_292 0
#define MU_MOD2_291 1
#define MU_MOD2_290 0
#define MU_MOD2_289 1
#define MU_MOD2_288 0
#define MU_MOD2_287 1
#define MU_MOD2_286 0
#define MU_MOD2_285 1
#define MU_MOD2_284 0
#define MU_MOD2_283 1
#define MU_MOD2_282 0
#define MU_MOD2_281 1
#define MU_MOD2_280 0
#define MU_MOD2_279 1
#define MU_MOD2_278 0
#define MU_MOD2_277 1
#define MU_MOD2_276 0
#define MU_MOD2_275 1
#define MU_MOD2_274 0
#define MU_MOD2_273 1
#define MU_MOD2_272 0
#define MU_MOD2_271 1
#define MU_MOD2_270 0
#define MU_MOD2_269 1
#define MU_MOD2_268 0
#define MU_MOD2_267 1
#define MU_MOD2_266 0
#define MU_MOD2_265 1
#define MU_MOD2_264 0
#define MU_MOD2_263 1
#define MU_MOD2_262 0
#define MU_MOD2_261 1
#define MU_MOD2_260 0
#define MU_MOD2_259 1
#define MU_MOD2_258 0
#define MU_MOD2_257 1
#define MU_MOD2_256 0
#define MU_MOD2_255 1
#define MU_MOD2_254 0
#define MU_MOD2_253 1
#define MU_MOD2_252 0
#define MU_MOD2_251 1
#define MU_MOD2_250 0
#define MU_MOD2_249 1
#define MU_MOD2_248 0
#define MU_MOD2_247 1
#define MU_MOD2_246 0
#define MU_MOD2_245 1
#define MU_MOD2_244 0
#define MU_MOD2_243 1
#define MU_MOD2_242 0
#define MU_MOD2_241 1
#define MU_MOD2_240 0
#define MU_MOD2_239 1
#define MU_MOD2_238 0
#define MU_MOD2_237 1
#define MU_MOD2_236 0
#define MU_MOD2_235 1
#define MU_MOD2_234 0
#define MU_MOD2_233 1
#define MU_MOD2_232 0
#define MU_MOD2_231 1
#define MU_MOD2_230 0
#define MU_MOD2_229 1
#define MU_MOD2_228 0
#define MU_MOD2_227 1
#define MU_MOD2_226 0
#define MU_MOD2_225 1
#define MU_MOD2_224 0
#define MU_MOD2_223 1
#define MU_MOD2_222 0
#define MU_MOD2_221 1
#define MU_MOD2_220 0
#define MU_MOD2_219 1
#define MU_MOD2_218 0
#define MU_MOD2_217 1
#define MU_MOD2_216 0
#define MU_MOD2_215 1
#define MU_MOD2_214 0
#define MU_MOD2_213 1
#define MU_MOD2_212 0
#define MU_MOD2_211 1
#define MU_MOD2_210 0
#define MU_MOD2_209 1
#define MU_MOD2_208 0
#define MU_MOD2_207 1
#define MU_MOD2_206 0
#define MU_MOD2_205 1
#define MU_MOD2_204 0
#define MU_MOD2_203 1
#define MU_MOD2_202 0
#define MU_MOD2_201 1
#define MU_MOD2_200 0
#define MU_MOD2_199 1
#define MU_MOD2_198 0
#define MU_MOD2_197 1
#define MU_MOD2_196 0
#define MU_MOD2_195 1
#define MU_MOD2_194 0
#define MU_MOD2_193 1
#define MU_MOD2_192 0
#define MU_MOD2_191 1
#define MU_MOD2_190 0
#define MU_MOD2_189 1
#define MU_MOD2_188 0
#define MU_MOD2_187 1
#define MU_MOD2_186 0
#define MU_MOD2_185 1
#define MU_MOD2_184 0
#define MU_MOD2_183 1
#define MU_MOD2_182 0
#define MU_MOD2_181 1
#define MU_MOD2_180 0
#define MU_MOD2_179 1
#define MU_MOD2_178 0
#define MU_MOD2_177 1
#define MU_MOD2_176 0
#define MU_MOD2_175 1
#define MU_MOD2_174 0
#define MU_MOD2_173 1
#define MU_MOD2_172 0
#define MU_MOD2_171 1
#define MU_MOD2_170 0
#define MU_MOD2_169 1
#define MU_MOD2_168 0
#define MU_MOD2_167 1
#define MU_MOD2_166 0
#define MU_MOD2_165 1
#define MU_MOD2_164 0
#define MU_MOD2_163 1
#define MU_MOD2_162 0
#define MU_MOD2_161 1
#define MU_MOD2_160 0
#define MU_MOD2_159 1
#define MU_MOD2_158 0
#define MU_MOD2_157 1
#define MU_MOD2_156 0
#define MU_MOD2_155 1
#define MU_MOD2_154 0
#define MU_MOD2_153 1
#define MU_MOD2_152 0
#define MU_MOD2_151 1
#define MU_MOD2_150 0
#define MU_MOD2_149 1
#define MU_MOD2_148 0
#define MU_MOD2_147 1
#define MU_MOD2_146 0
#define MU_MOD2_145 1
#define MU_MOD2_144 0
#define MU_MOD2_143 1
#define MU_MOD2_142 0
#define MU_MOD2_141 1
#define MU_MOD2_140 0
#define MU_MOD2_139 1
#define MU_MOD2_138 0
#define MU_MOD2_137 1
#define MU_MOD2_136 0
#define MU_MOD2_135 1
#define MU_MOD2_134 0
#define MU_MOD2_133 1
#define MU_MOD2_132 0
#define MU_MOD2_131 1
#define MU_MOD2_130 0
#define MU_MOD2_129 1
#define MU_MOD2_128 0
#define MU_MOD2_127 1
#define MU_MOD2_126 0
#define MU_MOD2_125 1
#define MU_MOD2_124 0
#define MU_MOD2_123 1
#define MU_MOD2_122 0
#define MU_MOD2_121 1
#define MU_MOD2_120 0
#define MU_MOD2_119 1
#define MU_MOD2_118 0
#define MU_MOD2_117 1
#define MU_MOD2_116 0
#define MU_MOD2_115 1
#define MU_MOD2_114 0
#define MU_MOD2_113 1
#define MU_MOD2_112 0
#define MU_MOD2_111 1
#define MU_MOD2_110 0
#define MU_MOD2_109 1
#define MU_MOD2_108 0
#define MU_MOD2_107 1
#define MU_MOD2_106 0
#define MU_MOD2_105 1
#define MU_MOD2_104 0
#define MU_MOD2_103 1
#define MU_MOD2_102 0
#define MU_MOD2_101 1
#define MU_MOD2_100 0
#define MU_MOD2_99 1
#define MU_MOD2_98 0
#define MU_MOD2_97 1
#define MU_MOD2_96 0
#define MU_MOD2_95 1
#define MU_MOD2_94 0
#define MU_MOD2_93 1
#define MU_MOD2_92 0
#define MU_MOD2_91 1
#define MU_MOD2_90 0
#define MU_MOD2_89 1
#define MU_MOD2_88 0
#define MU_MOD2_87 1
#define MU_MOD2_86 0
#define MU_MOD2_85 1
#define MU_MOD2_84 0
#define MU_MOD2_83 1
#define MU_MOD2_82 0
#define MU_MOD2_81 1
#define MU_MOD2_80 0
#define MU_MOD2_79 1
#define MU_MOD2_78 0
#define MU_MOD2_77 1
#define MU_MOD2_76 0
#define MU_MOD2_75 1
#define MU_MOD2_74 0
#define MU_MOD2_73 1
#define MU_MOD2_72 0
#define MU_MOD2_71 1
#define MU_MOD2_70 0
#define MU_MOD2_69 1
#define MU_MOD2_68 0
#define MU_MOD2_67 1
#define MU_MOD2_66 0
#define MU_MOD2_65 1
#define MU_MOD2_64 0
#define MU_MOD2_63 1
#define MU_MOD2_62 0
#define MU_MOD2_61 1
#define MU_MOD2_60 0
#define MU_MOD2_59 1
#define MU_MOD2_58 0
#define MU_MOD2_57 1
#define MU_MOD2_56 0
#define MU_MOD2_55 1
#define MU_MOD2_54 0
#define MU_MOD2_53 1
#define MU_MOD2_52 0
#define MU_MOD2_51 1
#define MU_MOD2_50 0
#define MU_MOD2_49 1
#define MU_MOD2_48 0
#define MU_MOD2_47 1
#define MU_MOD2_46 0
#define MU_MOD2_45 1
#define MU_MOD2_44 0
#define MU_MOD2_43 1
#define MU_MOD2_42 0
#define MU_MOD2_41 1
#define MU_MOD2_40 0
#define MU_MOD2_39 1
#define MU_MOD2_38 0
#define MU_MOD2_37 1
#define MU_MOD2_36 0
#define MU_MOD2_35 1
#define MU_MOD2_34 0
#define MU_MOD2_33 1
#define MU_MOD2_32 0
#define MU_MOD2_31 1
#define MU_MOD2_30 0
#define MU_MOD2_29 1
#define MU_MOD2_28 0
#define MU_MOD2_27 1
#define MU_MOD2_26 0
#define MU_MOD2_25 1
#define MU_MOD2_24 0
#define MU_MOD2_23 1
#define MU_MOD2_22 0
#define MU_MOD2_21 1
#define MU_MOD2_20 0
#define MU_MOD2_19 1
#define MU_MOD2_18 0
#define MU_MOD2_17 1
#define MU_MOD2_16 0
#define MU_MOD2_15 1
#define MU_MOD2_14 0
#define MU_MOD2_13 1
#define MU_MOD2_12 0
#define MU_MOD2_11 1
#define MU_MOD2_10 0
#define MU_MOD2_9 1
#define MU_MOD2_8 0
#define MU_MOD2_7 1
#define MU_MOD2_6 0
#define MU_MOD2_5 1
#define MU_MOD2_4 0
#define MU_MOD2_3 1
#define MU_MOD2_2 0
#define MU_MOD2_1 1
#define MU_MOD2_0 0

#define MU_THE_NTH_ARG(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124,  ... ) P124

#define MU_TRIGGER_PARENTHESIS(...) ,

#define MU_LPAREN (

#ifdef _MSC_VER
#define MU_COUNT_1_OR_MORE_ARG(...) MU_THE_NTH_ARG MU_LPAREN __VA_ARGS__, \
123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)
#define MU_MORE_THAN_1_ARG(...) MU_THE_NTH_ARG MU_LPAREN __VA_ARGS__, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0)
#else
#define MU_COUNT_1_OR_MORE_ARG(...) MU_THE_NTH_ARG (__VA_ARGS__, \
123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)
#define MU_MORE_THAN_1_ARG(...) MU_THE_NTH_ARG(__VA_ARGS__, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, 0)
#endif

#define MU_COUNT_ARG(...) MU_C2(MU_COUNT_ARG_, MU_ISEMPTY(__VA_ARGS__))(__VA_ARGS__)
#define MU_COUNT_ARG_1(...) 0
#define MU_COUNT_ARG_0(...) MU_C1(MU_COUNT_1_OR_MORE_ARG(__VA_ARGS__))

#define MU_ISEMPTY(...) MU_C5(MU_DISPTACH_EMPTY_, MU_MORE_THAN_1_ARG(MU_TRIGGER_PARENTHESIS __VA_ARGS__ ()), MU_MORE_THAN_1_ARG(__VA_ARGS__), MU_MORE_THAN_1_ARG(__VA_ARGS__ ()), MU_MORE_THAN_1_ARG(MU_TRIGGER_PARENTHESIS __VA_ARGS__))
#define MU_DISPTACH_EMPTY_1000 1
#define MU_DISPTACH_EMPTY_0000 0
#define MU_DISPTACH_EMPTY_1100 0
#define MU_DISPTACH_EMPTY_1111 0
#define MU_DISPTACH_EMPTY_1001 0
#define MU_DISPTACH_EMPTY_1010 0


#define MU_C2_(x,y) x##y

#define MU_C2(x,y) MU_C2_(x,y)

#define MU_C3(x,y,z) MU_C2(x, MU_C2(y,z))

#define MU_C4(x,y,z, u) MU_C2(MU_C2(x,y), MU_C2(z,u))

#define MU_C5(x,y,z,u, v) MU_C2(MU_C4(x,y, z, u), v)

#define MU_C1_(x) x

#define MU_C1(x) MU_C1_(x)

#define MU_C2STRING(x,y) x y

#define MU_C3STRING(x,y,z) x y z

#define MU_C4STRING(x,y,z,u) x y z u

#define MU_C5STRING(x,y,z,u,v) x y z u v


#define MU_FOR_EACH_1_124(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124) \
X(P1) \
MU_FOR_EACH_1_123(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124)

#define MU_FOR_EACH_1_123(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123) \
X(P1) \
MU_FOR_EACH_1_122(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123)

#define MU_FOR_EACH_1_122(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122) \
X(P1) \
MU_FOR_EACH_1_121(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122)

#define MU_FOR_EACH_1_121(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121) \
X(P1) \
MU_FOR_EACH_1_120(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121)

#define MU_FOR_EACH_1_120(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120) \
X(P1) \
MU_FOR_EACH_1_119(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120)

#define MU_FOR_EACH_1_119(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119) \
X(P1) \
MU_FOR_EACH_1_118(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119)

#define MU_FOR_EACH_1_118(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118) \
X(P1) \
MU_FOR_EACH_1_117(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118)

#define MU_FOR_EACH_1_117(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117) \
X(P1) \
MU_FOR_EACH_1_116(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117)

#define MU_FOR_EACH_1_116(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116) \
X(P1) \
MU_FOR_EACH_1_115(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116)

#define MU_FOR_EACH_1_115(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115) \
X(P1) \
MU_FOR_EACH_1_114(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115)

#define MU_FOR_EACH_1_114(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114) \
X(P1) \
MU_FOR_EACH_1_113(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114)

#define MU_FOR_EACH_1_113(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113) \
X(P1) \
MU_FOR_EACH_1_112(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113)

#define MU_FOR_EACH_1_112(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112) \
X(P1) \
MU_FOR_EACH_1_111(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112)

#define MU_FOR_EACH_1_111(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111) \
X(P1) \
MU_FOR_EACH_1_110(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111)

#define MU_FOR_EACH_1_110(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110) \
X(P1) \
MU_FOR_EACH_1_109(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110)

#define MU_FOR_EACH_1_109(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109) \
X(P1) \
MU_FOR_EACH_1_108(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109)

#define MU_FOR_EACH_1_108(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108) \
X(P1) \
MU_FOR_EACH_1_107(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108)

#define MU_FOR_EACH_1_107(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107) \
X(P1) \
MU_FOR_EACH_1_106(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107)

#define MU_FOR_EACH_1_106(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106) \
X(P1) \
MU_FOR_EACH_1_105(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106)

#define MU_FOR_EACH_1_105(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105) \
X(P1) \
MU_FOR_EACH_1_104(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105)

#define MU_FOR_EACH_1_104(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104) \
X(P1) \
MU_FOR_EACH_1_103(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104)

#define MU_FOR_EACH_1_103(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103) \
X(P1) \
MU_FOR_EACH_1_102(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103)

#define MU_FOR_EACH_1_102(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102) \
X(P1) \
MU_FOR_EACH_1_101(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102)

#define MU_FOR_EACH_1_101(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101) \
X(P1) \
MU_FOR_EACH_1_100(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101)

#define MU_FOR_EACH_1_100(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100) \
X(P1) \
MU_FOR_EACH_1_99(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100)

#define MU_FOR_EACH_1_99(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99) \
X(P1) \
MU_FOR_EACH_1_98(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99)

#define MU_FOR_EACH_1_98(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98) \
X(P1) \
MU_FOR_EACH_1_97(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98)

#define MU_FOR_EACH_1_97(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97) \
X(P1) \
MU_FOR_EACH_1_96(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97)

#define MU_FOR_EACH_1_96(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96) \
X(P1) \
MU_FOR_EACH_1_95(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96)

#define MU_FOR_EACH_1_95(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95) \
X(P1) \
MU_FOR_EACH_1_94(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95)

#define MU_FOR_EACH_1_94(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94) \
X(P1) \
MU_FOR_EACH_1_93(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94)

#define MU_FOR_EACH_1_93(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93) \
X(P1) \
MU_FOR_EACH_1_92(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93)

#define MU_FOR_EACH_1_92(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92) \
X(P1) \
MU_FOR_EACH_1_91(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92)

#define MU_FOR_EACH_1_91(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91) \
X(P1) \
MU_FOR_EACH_1_90(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91)

#define MU_FOR_EACH_1_90(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90) \
X(P1) \
MU_FOR_EACH_1_89(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90)

#define MU_FOR_EACH_1_89(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89) \
X(P1) \
MU_FOR_EACH_1_88(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89)

#define MU_FOR_EACH_1_88(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88) \
X(P1) \
MU_FOR_EACH_1_87(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88)

#define MU_FOR_EACH_1_87(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87) \
X(P1) \
MU_FOR_EACH_1_86(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87)

#define MU_FOR_EACH_1_86(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86) \
X(P1) \
MU_FOR_EACH_1_85(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86)

#define MU_FOR_EACH_1_85(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85) \
X(P1) \
MU_FOR_EACH_1_84(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85)

#define MU_FOR_EACH_1_84(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84) \
X(P1) \
MU_FOR_EACH_1_83(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84)

#define MU_FOR_EACH_1_83(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83) \
X(P1) \
MU_FOR_EACH_1_82(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83)

#define MU_FOR_EACH_1_82(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82) \
X(P1) \
MU_FOR_EACH_1_81(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82)

#define MU_FOR_EACH_1_81(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81) \
X(P1) \
MU_FOR_EACH_1_80(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81)

#define MU_FOR_EACH_1_80(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80) \
X(P1) \
MU_FOR_EACH_1_79(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80)

#define MU_FOR_EACH_1_79(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79) \
X(P1) \
MU_FOR_EACH_1_78(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79)

#define MU_FOR_EACH_1_78(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78) \
X(P1) \
MU_FOR_EACH_1_77(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78)

#define MU_FOR_EACH_1_77(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77) \
X(P1) \
MU_FOR_EACH_1_76(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77)

#define MU_FOR_EACH_1_76(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76) \
X(P1) \
MU_FOR_EACH_1_75(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76)

#define MU_FOR_EACH_1_75(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75) \
X(P1) \
MU_FOR_EACH_1_74(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75)

#define MU_FOR_EACH_1_74(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74) \
X(P1) \
MU_FOR_EACH_1_73(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74)

#define MU_FOR_EACH_1_73(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73) \
X(P1) \
MU_FOR_EACH_1_72(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73)

#define MU_FOR_EACH_1_72(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72) \
X(P1) \
MU_FOR_EACH_1_71(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72)

#define MU_FOR_EACH_1_71(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71) \
X(P1) \
MU_FOR_EACH_1_70(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71)

#define MU_FOR_EACH_1_70(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70) \
X(P1) \
MU_FOR_EACH_1_69(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70)

#define MU_FOR_EACH_1_69(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69) \
X(P1) \
MU_FOR_EACH_1_68(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69)

#define MU_FOR_EACH_1_68(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68) \
X(P1) \
MU_FOR_EACH_1_67(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68)

#define MU_FOR_EACH_1_67(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67) \
X(P1) \
MU_FOR_EACH_1_66(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67)

#define MU_FOR_EACH_1_66(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66) \
X(P1) \
MU_FOR_EACH_1_65(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66)

#define MU_FOR_EACH_1_65(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65) \
X(P1) \
MU_FOR_EACH_1_64(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65)

#define MU_FOR_EACH_1_64(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64) \
X(P1) \
MU_FOR_EACH_1_63(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64)

#define MU_FOR_EACH_1_63(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63) \
X(P1) \
MU_FOR_EACH_1_62(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63)

#define MU_FOR_EACH_1_62(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62) \
X(P1) \
MU_FOR_EACH_1_61(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62)

#define MU_FOR_EACH_1_61(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61) \
X(P1) \
MU_FOR_EACH_1_60(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61)

#define MU_FOR_EACH_1_60(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60) \
X(P1) \
MU_FOR_EACH_1_59(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60)

#define MU_FOR_EACH_1_59(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59) \
X(P1) \
MU_FOR_EACH_1_58(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59)

#define MU_FOR_EACH_1_58(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58) \
X(P1) \
MU_FOR_EACH_1_57(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58)

#define MU_FOR_EACH_1_57(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57) \
X(P1) \
MU_FOR_EACH_1_56(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57)

#define MU_FOR_EACH_1_56(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56) \
X(P1) \
MU_FOR_EACH_1_55(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56)

#define MU_FOR_EACH_1_55(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55) \
X(P1) \
MU_FOR_EACH_1_54(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55)

#define MU_FOR_EACH_1_54(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54) \
X(P1) \
MU_FOR_EACH_1_53(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54)

#define MU_FOR_EACH_1_53(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53) \
X(P1) \
MU_FOR_EACH_1_52(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53)

#define MU_FOR_EACH_1_52(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52) \
X(P1) \
MU_FOR_EACH_1_51(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52)

#define MU_FOR_EACH_1_51(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51) \
X(P1) \
MU_FOR_EACH_1_50(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51)

#define MU_FOR_EACH_1_50(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50) \
X(P1) \
MU_FOR_EACH_1_49(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50)

#define MU_FOR_EACH_1_49(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49) \
X(P1) \
MU_FOR_EACH_1_48(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49)

#define MU_FOR_EACH_1_48(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48) \
X(P1) \
MU_FOR_EACH_1_47(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48)

#define MU_FOR_EACH_1_47(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47) \
X(P1) \
MU_FOR_EACH_1_46(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47)

#define MU_FOR_EACH_1_46(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46) \
X(P1) \
MU_FOR_EACH_1_45(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46)

#define MU_FOR_EACH_1_45(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45) \
X(P1) \
MU_FOR_EACH_1_44(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45)

#define MU_FOR_EACH_1_44(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44) \
X(P1) \
MU_FOR_EACH_1_43(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44)

#define MU_FOR_EACH_1_43(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43) \
X(P1) \
MU_FOR_EACH_1_42(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43)

#define MU_FOR_EACH_1_42(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42) \
X(P1) \
MU_FOR_EACH_1_41(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42)

#define MU_FOR_EACH_1_41(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41) \
X(P1) \
MU_FOR_EACH_1_40(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41)

#define MU_FOR_EACH_1_40(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40) \
X(P1) \
MU_FOR_EACH_1_39(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40)

#define MU_FOR_EACH_1_39(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39) \
X(P1) \
MU_FOR_EACH_1_38(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39)

#define MU_FOR_EACH_1_38(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38) \
X(P1) \
MU_FOR_EACH_1_37(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38)

#define MU_FOR_EACH_1_37(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37) \
X(P1) \
MU_FOR_EACH_1_36(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37)

#define MU_FOR_EACH_1_36(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36) \
X(P1) \
MU_FOR_EACH_1_35(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36)

#define MU_FOR_EACH_1_35(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35) \
X(P1) \
MU_FOR_EACH_1_34(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35)

#define MU_FOR_EACH_1_34(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34) \
X(P1) \
MU_FOR_EACH_1_33(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34)

#define MU_FOR_EACH_1_33(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33) \
X(P1) \
MU_FOR_EACH_1_32(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33)

#define MU_FOR_EACH_1_32(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32) \
X(P1) \
MU_FOR_EACH_1_31(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32)

#define MU_FOR_EACH_1_31(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31) \
X(P1) \
MU_FOR_EACH_1_30(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31)

#define MU_FOR_EACH_1_30(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30) \
X(P1) \
MU_FOR_EACH_1_29(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30)

#define MU_FOR_EACH_1_29(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29) \
X(P1) \
MU_FOR_EACH_1_28(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29)

#define MU_FOR_EACH_1_28(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28) \
X(P1) \
MU_FOR_EACH_1_27(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28)

#define MU_FOR_EACH_1_27(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27) \
X(P1) \
MU_FOR_EACH_1_26(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27)

#define MU_FOR_EACH_1_26(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26) \
X(P1) \
MU_FOR_EACH_1_25(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26)

#define MU_FOR_EACH_1_25(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25) \
X(P1) \
MU_FOR_EACH_1_24(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25)

#define MU_FOR_EACH_1_24(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24) \
X(P1) \
MU_FOR_EACH_1_23(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24)

#define MU_FOR_EACH_1_23(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23) \
X(P1) \
MU_FOR_EACH_1_22(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23)

#define MU_FOR_EACH_1_22(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22) \
X(P1) \
MU_FOR_EACH_1_21(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22)

#define MU_FOR_EACH_1_21(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21) \
X(P1) \
MU_FOR_EACH_1_20(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21)

#define MU_FOR_EACH_1_20(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20) \
X(P1) \
MU_FOR_EACH_1_19(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20)

#define MU_FOR_EACH_1_19(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19) \
X(P1) \
MU_FOR_EACH_1_18(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19)

#define MU_FOR_EACH_1_18(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18) \
X(P1) \
MU_FOR_EACH_1_17(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18)

#define MU_FOR_EACH_1_17(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17) \
X(P1) \
MU_FOR_EACH_1_16(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17)

#define MU_FOR_EACH_1_16(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16) \
X(P1) \
MU_FOR_EACH_1_15(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16)

#define MU_FOR_EACH_1_15(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15) \
X(P1) \
MU_FOR_EACH_1_14(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15)

#define MU_FOR_EACH_1_14(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14) \
X(P1) \
MU_FOR_EACH_1_13(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14)

#define MU_FOR_EACH_1_13(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) \
X(P1) \
MU_FOR_EACH_1_12(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13)

#define MU_FOR_EACH_1_12(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) \
X(P1) \
MU_FOR_EACH_1_11(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)

#define MU_FOR_EACH_1_11(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) \
X(P1) \
MU_FOR_EACH_1_10(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11)

#define MU_FOR_EACH_1_10(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) \
X(P1) \
MU_FOR_EACH_1_9(X, P2, P3, P4, P5, P6, P7, P8, P9, P10)

#define MU_FOR_EACH_1_9(X, P1, P2, P3, P4, P5, P6, P7, P8, P9) \
X(P1) \
MU_FOR_EACH_1_8(X, P2, P3, P4, P5, P6, P7, P8, P9)

#define MU_FOR_EACH_1_8(X, P1, P2, P3, P4, P5, P6, P7, P8) \
X(P1) \
MU_FOR_EACH_1_7(X, P2, P3, P4, P5, P6, P7, P8)

#define MU_FOR_EACH_1_7(X, P1, P2, P3, P4, P5, P6, P7) \
X(P1) \
MU_FOR_EACH_1_6(X, P2, P3, P4, P5, P6, P7)

#define MU_FOR_EACH_1_6(X, P1, P2, P3, P4, P5, P6) \
X(P1) \
MU_FOR_EACH_1_5(X, P2, P3, P4, P5, P6)

#define MU_FOR_EACH_1_5(X, P1, P2, P3, P4, P5) \
X(P1) \
MU_FOR_EACH_1_4(X, P2, P3, P4, P5)

#define MU_FOR_EACH_1_4(X, P1, P2, P3, P4) \
X(P1) \
MU_FOR_EACH_1_3(X, P2, P3, P4)

#define MU_FOR_EACH_1_3(X, P1, P2, P3) \
X(P1) \
MU_FOR_EACH_1_2(X, P2, P3)

#define MU_FOR_EACH_1_2(X, P1, P2) \
X(P1) \
MU_FOR_EACH_1_1(X, P2)

#define MU_FOR_EACH_1_1(X, P1) \
X(P1)

#ifdef _MSC_VER
#define MU_FOR_EACH_1(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_1_,MU_C1(MU_COUNT_ARG(__VA_ARGS__))) MU_LPAREN MACRO_TO_INVOKE, __VA_ARGS__)
#else
#define MU_FOR_EACH_1(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_1_,MU_C1(MU_COUNT_ARG(__VA_ARGS__))) ( MACRO_TO_INVOKE, __VA_ARGS__)
#endif

#define MU_FOR_EACH_1_KEEP_1_124(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_123(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124)


#define MU_FOR_EACH_1_KEEP_1_123(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_122(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123)


#define MU_FOR_EACH_1_KEEP_1_122(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_121(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122)


#define MU_FOR_EACH_1_KEEP_1_121(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_120(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121)


#define MU_FOR_EACH_1_KEEP_1_120(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_119(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120)


#define MU_FOR_EACH_1_KEEP_1_119(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_118(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119)


#define MU_FOR_EACH_1_KEEP_1_118(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_117(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118)


#define MU_FOR_EACH_1_KEEP_1_117(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_116(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117)


#define MU_FOR_EACH_1_KEEP_1_116(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_115(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116)


#define MU_FOR_EACH_1_KEEP_1_115(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_114(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115)


#define MU_FOR_EACH_1_KEEP_1_114(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_113(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114)


#define MU_FOR_EACH_1_KEEP_1_113(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_112(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113)


#define MU_FOR_EACH_1_KEEP_1_112(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_111(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112)


#define MU_FOR_EACH_1_KEEP_1_111(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_110(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111)


#define MU_FOR_EACH_1_KEEP_1_110(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_109(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110)


#define MU_FOR_EACH_1_KEEP_1_109(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_108(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109)


#define MU_FOR_EACH_1_KEEP_1_108(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_107(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108)


#define MU_FOR_EACH_1_KEEP_1_107(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_106(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107)


#define MU_FOR_EACH_1_KEEP_1_106(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_105(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106)


#define MU_FOR_EACH_1_KEEP_1_105(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_104(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105)


#define MU_FOR_EACH_1_KEEP_1_104(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_103(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104)


#define MU_FOR_EACH_1_KEEP_1_103(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_102(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103)


#define MU_FOR_EACH_1_KEEP_1_102(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_101(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102)


#define MU_FOR_EACH_1_KEEP_1_101(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_100(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101)


#define MU_FOR_EACH_1_KEEP_1_100(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_99(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100)


#define MU_FOR_EACH_1_KEEP_1_99(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_98(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99)


#define MU_FOR_EACH_1_KEEP_1_98(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_97(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98)


#define MU_FOR_EACH_1_KEEP_1_97(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_96(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97)


#define MU_FOR_EACH_1_KEEP_1_96(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_95(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96)


#define MU_FOR_EACH_1_KEEP_1_95(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_94(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95)


#define MU_FOR_EACH_1_KEEP_1_94(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_93(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94)


#define MU_FOR_EACH_1_KEEP_1_93(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_92(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93)


#define MU_FOR_EACH_1_KEEP_1_92(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_91(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92)


#define MU_FOR_EACH_1_KEEP_1_91(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_90(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91)


#define MU_FOR_EACH_1_KEEP_1_90(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_89(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90)


#define MU_FOR_EACH_1_KEEP_1_89(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_88(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89)


#define MU_FOR_EACH_1_KEEP_1_88(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_87(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88)


#define MU_FOR_EACH_1_KEEP_1_87(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_86(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87)


#define MU_FOR_EACH_1_KEEP_1_86(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_85(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86)


#define MU_FOR_EACH_1_KEEP_1_85(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_84(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85)


#define MU_FOR_EACH_1_KEEP_1_84(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_83(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84)


#define MU_FOR_EACH_1_KEEP_1_83(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_82(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83)


#define MU_FOR_EACH_1_KEEP_1_82(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_81(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82)


#define MU_FOR_EACH_1_KEEP_1_81(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_80(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81)


#define MU_FOR_EACH_1_KEEP_1_80(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_79(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80)


#define MU_FOR_EACH_1_KEEP_1_79(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_78(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79)


#define MU_FOR_EACH_1_KEEP_1_78(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_77(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78)


#define MU_FOR_EACH_1_KEEP_1_77(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_76(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77)


#define MU_FOR_EACH_1_KEEP_1_76(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_75(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76)


#define MU_FOR_EACH_1_KEEP_1_75(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_74(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75)


#define MU_FOR_EACH_1_KEEP_1_74(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_73(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74)


#define MU_FOR_EACH_1_KEEP_1_73(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_72(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73)


#define MU_FOR_EACH_1_KEEP_1_72(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_71(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72)


#define MU_FOR_EACH_1_KEEP_1_71(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_70(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71)


#define MU_FOR_EACH_1_KEEP_1_70(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_69(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70)


#define MU_FOR_EACH_1_KEEP_1_69(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_68(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69)


#define MU_FOR_EACH_1_KEEP_1_68(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_67(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68)


#define MU_FOR_EACH_1_KEEP_1_67(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_66(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67)


#define MU_FOR_EACH_1_KEEP_1_66(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_65(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66)


#define MU_FOR_EACH_1_KEEP_1_65(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_64(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65)


#define MU_FOR_EACH_1_KEEP_1_64(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_63(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64)


#define MU_FOR_EACH_1_KEEP_1_63(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_62(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63)


#define MU_FOR_EACH_1_KEEP_1_62(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_61(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62)


#define MU_FOR_EACH_1_KEEP_1_61(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_60(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61)


#define MU_FOR_EACH_1_KEEP_1_60(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_59(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60)


#define MU_FOR_EACH_1_KEEP_1_59(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_58(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59)


#define MU_FOR_EACH_1_KEEP_1_58(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_57(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58)


#define MU_FOR_EACH_1_KEEP_1_57(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_56(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57)


#define MU_FOR_EACH_1_KEEP_1_56(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_55(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56)


#define MU_FOR_EACH_1_KEEP_1_55(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_54(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55)


#define MU_FOR_EACH_1_KEEP_1_54(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_53(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54)


#define MU_FOR_EACH_1_KEEP_1_53(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_52(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53)


#define MU_FOR_EACH_1_KEEP_1_52(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_51(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52)


#define MU_FOR_EACH_1_KEEP_1_51(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_50(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51)


#define MU_FOR_EACH_1_KEEP_1_50(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_49(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50)


#define MU_FOR_EACH_1_KEEP_1_49(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_48(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49)


#define MU_FOR_EACH_1_KEEP_1_48(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_47(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48)


#define MU_FOR_EACH_1_KEEP_1_47(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_46(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47)


#define MU_FOR_EACH_1_KEEP_1_46(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_45(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46)


#define MU_FOR_EACH_1_KEEP_1_45(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_44(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45)


#define MU_FOR_EACH_1_KEEP_1_44(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_43(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44)


#define MU_FOR_EACH_1_KEEP_1_43(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_42(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43)


#define MU_FOR_EACH_1_KEEP_1_42(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_41(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42)


#define MU_FOR_EACH_1_KEEP_1_41(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_40(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41)


#define MU_FOR_EACH_1_KEEP_1_40(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_39(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40)


#define MU_FOR_EACH_1_KEEP_1_39(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_38(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39)


#define MU_FOR_EACH_1_KEEP_1_38(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_37(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38)


#define MU_FOR_EACH_1_KEEP_1_37(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_36(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37)


#define MU_FOR_EACH_1_KEEP_1_36(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_35(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36)


#define MU_FOR_EACH_1_KEEP_1_35(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_34(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35)


#define MU_FOR_EACH_1_KEEP_1_34(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_33(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34)


#define MU_FOR_EACH_1_KEEP_1_33(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_32(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33)


#define MU_FOR_EACH_1_KEEP_1_32(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_31(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32)


#define MU_FOR_EACH_1_KEEP_1_31(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_30(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31)


#define MU_FOR_EACH_1_KEEP_1_30(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_29(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30)


#define MU_FOR_EACH_1_KEEP_1_29(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_28(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29)


#define MU_FOR_EACH_1_KEEP_1_28(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_27(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28)


#define MU_FOR_EACH_1_KEEP_1_27(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_26(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27)


#define MU_FOR_EACH_1_KEEP_1_26(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_25(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26)


#define MU_FOR_EACH_1_KEEP_1_25(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_24(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25)


#define MU_FOR_EACH_1_KEEP_1_24(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_23(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24)


#define MU_FOR_EACH_1_KEEP_1_23(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_22(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23)


#define MU_FOR_EACH_1_KEEP_1_22(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_21(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22)


#define MU_FOR_EACH_1_KEEP_1_21(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_20(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21)


#define MU_FOR_EACH_1_KEEP_1_20(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_19(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20)


#define MU_FOR_EACH_1_KEEP_1_19(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_18(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19)


#define MU_FOR_EACH_1_KEEP_1_18(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_17(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18)


#define MU_FOR_EACH_1_KEEP_1_17(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_16(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17)


#define MU_FOR_EACH_1_KEEP_1_16(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_15(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16)


#define MU_FOR_EACH_1_KEEP_1_15(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_14(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15)


#define MU_FOR_EACH_1_KEEP_1_14(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_13(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14)


#define MU_FOR_EACH_1_KEEP_1_13(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_12(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13)


#define MU_FOR_EACH_1_KEEP_1_12(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_11(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)


#define MU_FOR_EACH_1_KEEP_1_11(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_10(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11)


#define MU_FOR_EACH_1_KEEP_1_10(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_9(X, keep, P2, P3, P4, P5, P6, P7, P8, P9, P10)


#define MU_FOR_EACH_1_KEEP_1_9(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_8(X, keep, P2, P3, P4, P5, P6, P7, P8, P9)


#define MU_FOR_EACH_1_KEEP_1_8(X, keep, P1, P2, P3, P4, P5, P6, P7, P8) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_7(X, keep, P2, P3, P4, P5, P6, P7, P8)


#define MU_FOR_EACH_1_KEEP_1_7(X, keep, P1, P2, P3, P4, P5, P6, P7) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_6(X, keep, P2, P3, P4, P5, P6, P7)


#define MU_FOR_EACH_1_KEEP_1_6(X, keep, P1, P2, P3, P4, P5, P6) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_5(X, keep, P2, P3, P4, P5, P6)


#define MU_FOR_EACH_1_KEEP_1_5(X, keep, P1, P2, P3, P4, P5) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_4(X, keep, P2, P3, P4, P5)


#define MU_FOR_EACH_1_KEEP_1_4(X, keep, P1, P2, P3, P4) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_3(X, keep, P2, P3, P4)


#define MU_FOR_EACH_1_KEEP_1_3(X, keep, P1, P2, P3) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_2(X, keep, P2, P3)


#define MU_FOR_EACH_1_KEEP_1_2(X, keep, P1, P2) \
X(keep, P1) \
MU_FOR_EACH_1_KEEP_1_1(X, keep, P2)



#define MU_FOR_EACH_1_KEEP_1_1(X, keep, P1) \
X(keep, P1)

#ifdef _MSC_VER
#define MU_FOR_EACH_1_KEEP_1(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_1_KEEP_1_, MU_C2(MU_DEC,MU_C1(MU_COUNT_ARG(__VA_ARGS__)))) MU_LPAREN MACRO_TO_INVOKE, __VA_ARGS__)
#else
#define MU_FOR_EACH_1_KEEP_1(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_1_KEEP_1_, MU_C2(MU_DEC,MU_C1(MU_COUNT_ARG(__VA_ARGS__)))) ( MACRO_TO_INVOKE, __VA_ARGS__)
#endif

#define MU_FOR_EACH_2_KEEP_1_124(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_122(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124)


#define MU_FOR_EACH_2_KEEP_1_122(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_120(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122)


#define MU_FOR_EACH_2_KEEP_1_120(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_118(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120)


#define MU_FOR_EACH_2_KEEP_1_118(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_116(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118)


#define MU_FOR_EACH_2_KEEP_1_116(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_114(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116)


#define MU_FOR_EACH_2_KEEP_1_114(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_112(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114)


#define MU_FOR_EACH_2_KEEP_1_112(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_110(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112)


#define MU_FOR_EACH_2_KEEP_1_110(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_108(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110)


#define MU_FOR_EACH_2_KEEP_1_108(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_106(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108)


#define MU_FOR_EACH_2_KEEP_1_106(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_104(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106)


#define MU_FOR_EACH_2_KEEP_1_104(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_102(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104)


#define MU_FOR_EACH_2_KEEP_1_102(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_100(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102)


#define MU_FOR_EACH_2_KEEP_1_100(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_98(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100)


#define MU_FOR_EACH_2_KEEP_1_98(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_96(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98)


#define MU_FOR_EACH_2_KEEP_1_96(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_94(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96)


#define MU_FOR_EACH_2_KEEP_1_94(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_92(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94)


#define MU_FOR_EACH_2_KEEP_1_92(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_90(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92)


#define MU_FOR_EACH_2_KEEP_1_90(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_88(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90)


#define MU_FOR_EACH_2_KEEP_1_88(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_86(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88)


#define MU_FOR_EACH_2_KEEP_1_86(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_84(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86)


#define MU_FOR_EACH_2_KEEP_1_84(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_82(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84)


#define MU_FOR_EACH_2_KEEP_1_82(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_80(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82)


#define MU_FOR_EACH_2_KEEP_1_80(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_78(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80)


#define MU_FOR_EACH_2_KEEP_1_78(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_76(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78)


#define MU_FOR_EACH_2_KEEP_1_76(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_74(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76)


#define MU_FOR_EACH_2_KEEP_1_74(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_72(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74)


#define MU_FOR_EACH_2_KEEP_1_72(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_70(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72)


#define MU_FOR_EACH_2_KEEP_1_70(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_68(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70)


#define MU_FOR_EACH_2_KEEP_1_68(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_66(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68)


#define MU_FOR_EACH_2_KEEP_1_66(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_64(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66)


#define MU_FOR_EACH_2_KEEP_1_64(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_62(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64)


#define MU_FOR_EACH_2_KEEP_1_62(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_60(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62)


#define MU_FOR_EACH_2_KEEP_1_60(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_58(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60)


#define MU_FOR_EACH_2_KEEP_1_58(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_56(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58)


#define MU_FOR_EACH_2_KEEP_1_56(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_54(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56)


#define MU_FOR_EACH_2_KEEP_1_54(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_52(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54)


#define MU_FOR_EACH_2_KEEP_1_52(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_50(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52)


#define MU_FOR_EACH_2_KEEP_1_50(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_48(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50)


#define MU_FOR_EACH_2_KEEP_1_48(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_46(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48)


#define MU_FOR_EACH_2_KEEP_1_46(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_44(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46)


#define MU_FOR_EACH_2_KEEP_1_44(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_42(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44)


#define MU_FOR_EACH_2_KEEP_1_42(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_40(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42)


#define MU_FOR_EACH_2_KEEP_1_40(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_38(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40)


#define MU_FOR_EACH_2_KEEP_1_38(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_36(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38)


#define MU_FOR_EACH_2_KEEP_1_36(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_34(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36)


#define MU_FOR_EACH_2_KEEP_1_34(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_32(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34)


#define MU_FOR_EACH_2_KEEP_1_32(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_30(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32)


#define MU_FOR_EACH_2_KEEP_1_30(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_28(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30)


#define MU_FOR_EACH_2_KEEP_1_28(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_26(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28)


#define MU_FOR_EACH_2_KEEP_1_26(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_24(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26)


#define MU_FOR_EACH_2_KEEP_1_24(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_22(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24)


#define MU_FOR_EACH_2_KEEP_1_22(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_20(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22)


#define MU_FOR_EACH_2_KEEP_1_20(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_18(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20)


#define MU_FOR_EACH_2_KEEP_1_18(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_16(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18)


#define MU_FOR_EACH_2_KEEP_1_16(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_14(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16)


#define MU_FOR_EACH_2_KEEP_1_14(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_12(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14)


#define MU_FOR_EACH_2_KEEP_1_12(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_10(X, keep, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)


#define MU_FOR_EACH_2_KEEP_1_10(X, keep, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_8(X, keep, P3, P4, P5, P6, P7, P8, P9, P10)


#define MU_FOR_EACH_2_KEEP_1_8(X, keep, P1, P2, P3, P4, P5, P6, P7, P8) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_6(X, keep, P3, P4, P5, P6, P7, P8)


#define MU_FOR_EACH_2_KEEP_1_6(X, keep, P1, P2, P3, P4, P5, P6) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_4(X, keep, P3, P4, P5, P6)


#define MU_FOR_EACH_2_KEEP_1_4(X, keep, P1, P2, P3, P4) \
X(keep, P1, P2) \
MU_FOR_EACH_2_KEEP_1_2(X, keep, P3, P4)



#define MU_FOR_EACH_2_KEEP_1_1(...)

#define MU_FOR_EACH_2_KEEP_1_0(...)

#define MU_FOR_EACH_2_KEEP_1_2(X, keep, P1, P2) \
    X(keep, P1, P2) \

#ifdef _MSC_VER
#define MU_FOR_EACH_2_KEEP_1(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_KEEP_1_, MU_C2(MU_DEC,MU_C1(MU_COUNT_ARG(__VA_ARGS__)))) MU_LPAREN MACRO_TO_INVOKE, __VA_ARGS__)
#else
#define MU_FOR_EACH_2_KEEP_1(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_KEEP_1_, MU_C2(MU_DEC,MU_C1(MU_COUNT_ARG(__VA_ARGS__)))) ( MACRO_TO_INVOKE, __VA_ARGS__)
#endif


#define MU_FOR_EACH_2_KEEP_2_124(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_122(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124)


#define MU_FOR_EACH_2_KEEP_2_122(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_120(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122)


#define MU_FOR_EACH_2_KEEP_2_120(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_118(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120)


#define MU_FOR_EACH_2_KEEP_2_118(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_116(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118)


#define MU_FOR_EACH_2_KEEP_2_116(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_114(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116)


#define MU_FOR_EACH_2_KEEP_2_114(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_112(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114)


#define MU_FOR_EACH_2_KEEP_2_112(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_110(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112)


#define MU_FOR_EACH_2_KEEP_2_110(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_108(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110)


#define MU_FOR_EACH_2_KEEP_2_108(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_106(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108)


#define MU_FOR_EACH_2_KEEP_2_106(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_104(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106)


#define MU_FOR_EACH_2_KEEP_2_104(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_102(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104)


#define MU_FOR_EACH_2_KEEP_2_102(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_100(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102)


#define MU_FOR_EACH_2_KEEP_2_100(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_98(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100)


#define MU_FOR_EACH_2_KEEP_2_98(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_96(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98)


#define MU_FOR_EACH_2_KEEP_2_96(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_94(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96)


#define MU_FOR_EACH_2_KEEP_2_94(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_92(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94)


#define MU_FOR_EACH_2_KEEP_2_92(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_90(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92)


#define MU_FOR_EACH_2_KEEP_2_90(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_88(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90)


#define MU_FOR_EACH_2_KEEP_2_88(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_86(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88)


#define MU_FOR_EACH_2_KEEP_2_86(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_84(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86)


#define MU_FOR_EACH_2_KEEP_2_84(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_82(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84)


#define MU_FOR_EACH_2_KEEP_2_82(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_80(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82)


#define MU_FOR_EACH_2_KEEP_2_80(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_78(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80)


#define MU_FOR_EACH_2_KEEP_2_78(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_76(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78)


#define MU_FOR_EACH_2_KEEP_2_76(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_74(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76)


#define MU_FOR_EACH_2_KEEP_2_74(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_72(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74)


#define MU_FOR_EACH_2_KEEP_2_72(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_70(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72)


#define MU_FOR_EACH_2_KEEP_2_70(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_68(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70)


#define MU_FOR_EACH_2_KEEP_2_68(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_66(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68)


#define MU_FOR_EACH_2_KEEP_2_66(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_64(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66)


#define MU_FOR_EACH_2_KEEP_2_64(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_62(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64)


#define MU_FOR_EACH_2_KEEP_2_62(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_60(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62)


#define MU_FOR_EACH_2_KEEP_2_60(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_58(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60)


#define MU_FOR_EACH_2_KEEP_2_58(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_56(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58)


#define MU_FOR_EACH_2_KEEP_2_56(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_54(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56)


#define MU_FOR_EACH_2_KEEP_2_54(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_52(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54)


#define MU_FOR_EACH_2_KEEP_2_52(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_50(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52)


#define MU_FOR_EACH_2_KEEP_2_50(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_48(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50)


#define MU_FOR_EACH_2_KEEP_2_48(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_46(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48)


#define MU_FOR_EACH_2_KEEP_2_46(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_44(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46)


#define MU_FOR_EACH_2_KEEP_2_44(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_42(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44)


#define MU_FOR_EACH_2_KEEP_2_42(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_40(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42)


#define MU_FOR_EACH_2_KEEP_2_40(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_38(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40)


#define MU_FOR_EACH_2_KEEP_2_38(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_36(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38)


#define MU_FOR_EACH_2_KEEP_2_36(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_34(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36)


#define MU_FOR_EACH_2_KEEP_2_34(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_32(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34)


#define MU_FOR_EACH_2_KEEP_2_32(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_30(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32)


#define MU_FOR_EACH_2_KEEP_2_30(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_28(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30)


#define MU_FOR_EACH_2_KEEP_2_28(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_26(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28)


#define MU_FOR_EACH_2_KEEP_2_26(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_24(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26)


#define MU_FOR_EACH_2_KEEP_2_24(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_22(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24)


#define MU_FOR_EACH_2_KEEP_2_22(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_20(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22)


#define MU_FOR_EACH_2_KEEP_2_20(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_18(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20)


#define MU_FOR_EACH_2_KEEP_2_18(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_16(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18)


#define MU_FOR_EACH_2_KEEP_2_16(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_14(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16)


#define MU_FOR_EACH_2_KEEP_2_14(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_12(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14)


#define MU_FOR_EACH_2_KEEP_2_12(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_10(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)


#define MU_FOR_EACH_2_KEEP_2_10(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_8(X, keep1, keep2, P3, P4, P5, P6, P7, P8, P9, P10)


#define MU_FOR_EACH_2_KEEP_2_8(X, keep1, keep2, P1, P2, P3, P4, P5, P6, P7, P8) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_6(X, keep1, keep2, P3, P4, P5, P6, P7, P8)


#define MU_FOR_EACH_2_KEEP_2_6(X, keep1, keep2, P1, P2, P3, P4, P5, P6) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_4(X, keep1, keep2, P3, P4, P5, P6)


#define MU_FOR_EACH_2_KEEP_2_4(X, keep1, keep2, P1, P2, P3, P4) \
X(keep1, keep2, P1, P2) \
MU_FOR_EACH_2_KEEP_2_2(X, keep1, keep2, P3, P4)



#define MU_FOR_EACH_2_KEEP_2_1(...)

#define MU_FOR_EACH_2_KEEP_2_0(...)

#define MU_FOR_EACH_2_KEEP_2_2(X, keep1, keep2, P1, P2) \
    X(keep1, keep2, P1, P2) \

#ifdef _MSC_VER
#define MU_FOR_EACH_2_KEEP_2(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_KEEP_2_, MU_C2(MU_DEC,MU_C2(MU_DEC,MU_C1(MU_COUNT_ARG(__VA_ARGS__))))) MU_LPAREN MACRO_TO_INVOKE, __VA_ARGS__)
#else
#define MU_FOR_EACH_2_KEEP_2(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_KEEP_2_, MU_C2(MU_DEC, MU_C2(MU_DEC,MU_C1(MU_COUNT_ARG(__VA_ARGS__))))) ( MACRO_TO_INVOKE, __VA_ARGS__)
#endif


#define MU_FOR_EACH_2_0(...)

#define MU_FOR_EACH_2_2(X, P1, P2) \
X(P1, P2)

#define MU_FOR_EACH_2_4(X, P1, P2, P3, P4) \
X(P1, P2) \
MU_FOR_EACH_2_2(X, P3, P4)

#define MU_FOR_EACH_2_6(X, P1, P2, P3, P4, P5, P6) \
X(P1, P2) \
MU_FOR_EACH_2_4(X, P3, P4, P5, P6)

#define MU_FOR_EACH_2_8(X, P1, P2, P3, P4, P5, P6, P7, P8) \
X(P1, P2) \
MU_FOR_EACH_2_6(X, P3, P4, P5, P6, P7, P8)

#define MU_FOR_EACH_2_10(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) \
X(P1, P2) \
MU_FOR_EACH_2_8(X, P3, P4, P5, P6, P7, P8, P9, P10)

#define MU_FOR_EACH_2_12(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) \
X(P1, P2) \
MU_FOR_EACH_2_10(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)

#define MU_FOR_EACH_2_14(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14) \
X(P1, P2) \
MU_FOR_EACH_2_12(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14)

#define MU_FOR_EACH_2_16(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16) \
X(P1, P2) \
MU_FOR_EACH_2_14(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16)

#define MU_FOR_EACH_2_18(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18) \
X(P1, P2) \
MU_FOR_EACH_2_16(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18)

#define MU_FOR_EACH_2_20(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20) \
X(P1, P2) \
MU_FOR_EACH_2_18(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20)

#define MU_FOR_EACH_2_22(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22) \
X(P1, P2) \
MU_FOR_EACH_2_20(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22)

#define MU_FOR_EACH_2_24(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24) \
X(P1, P2) \
MU_FOR_EACH_2_22(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24)

#define MU_FOR_EACH_2_26(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26) \
X(P1, P2) \
MU_FOR_EACH_2_24(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26)

#define MU_FOR_EACH_2_28(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28) \
X(P1, P2) \
MU_FOR_EACH_2_26(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28)

#define MU_FOR_EACH_2_30(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30) \
X(P1, P2) \
MU_FOR_EACH_2_28(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30)

#define MU_FOR_EACH_2_32(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32) \
X(P1, P2) \
MU_FOR_EACH_2_30(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32)

#define MU_FOR_EACH_2_34(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34) \
X(P1, P2) \
MU_FOR_EACH_2_32(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34)

#define MU_FOR_EACH_2_36(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36) \
X(P1, P2) \
MU_FOR_EACH_2_34(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36)

#define MU_FOR_EACH_2_38(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38) \
X(P1, P2) \
MU_FOR_EACH_2_36(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38)

#define MU_FOR_EACH_2_40(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40) \
X(P1, P2) \
MU_FOR_EACH_2_38(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40)

#define MU_FOR_EACH_2_42(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42) \
X(P1, P2) \
MU_FOR_EACH_2_40(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42)

#define MU_FOR_EACH_2_44(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44) \
X(P1, P2) \
MU_FOR_EACH_2_42(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44)

#define MU_FOR_EACH_2_46(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46) \
X(P1, P2) \
MU_FOR_EACH_2_44(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46)

#define MU_FOR_EACH_2_48(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48) \
X(P1, P2) \
MU_FOR_EACH_2_46(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48)

#define MU_FOR_EACH_2_50(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50) \
X(P1, P2) \
MU_FOR_EACH_2_48(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50)

#define MU_FOR_EACH_2_52(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52) \
X(P1, P2) \
MU_FOR_EACH_2_50(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52)

#define MU_FOR_EACH_2_54(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54) \
X(P1, P2) \
MU_FOR_EACH_2_52(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54)

#define MU_FOR_EACH_2_56(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56) \
X(P1, P2) \
MU_FOR_EACH_2_54(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56)

#define MU_FOR_EACH_2_58(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58) \
X(P1, P2) \
MU_FOR_EACH_2_56(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58)

#define MU_FOR_EACH_2_60(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60) \
X(P1, P2) \
MU_FOR_EACH_2_58(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60)

#define MU_FOR_EACH_2_62(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62) \
X(P1, P2) \
MU_FOR_EACH_2_60(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62)

#define MU_FOR_EACH_2_64(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64) \
X(P1, P2) \
MU_FOR_EACH_2_62(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64)

#define MU_FOR_EACH_2_66(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66) \
X(P1, P2) \
MU_FOR_EACH_2_64(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66)

#define MU_FOR_EACH_2_68(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68) \
X(P1, P2) \
MU_FOR_EACH_2_66(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68)

#define MU_FOR_EACH_2_70(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70) \
X(P1, P2) \
MU_FOR_EACH_2_68(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70)

#define MU_FOR_EACH_2_72(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72) \
X(P1, P2) \
MU_FOR_EACH_2_70(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72)

#define MU_FOR_EACH_2_74(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74) \
X(P1, P2) \
MU_FOR_EACH_2_72(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74)

#define MU_FOR_EACH_2_76(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76) \
X(P1, P2) \
MU_FOR_EACH_2_74(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76)

#define MU_FOR_EACH_2_78(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78) \
X(P1, P2) \
MU_FOR_EACH_2_76(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78)

#define MU_FOR_EACH_2_80(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80) \
X(P1, P2) \
MU_FOR_EACH_2_78(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80)

#define MU_FOR_EACH_2_82(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82) \
X(P1, P2) \
MU_FOR_EACH_2_80(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82)

#define MU_FOR_EACH_2_84(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84) \
X(P1, P2) \
MU_FOR_EACH_2_82(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84)

#define MU_FOR_EACH_2_86(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86) \
X(P1, P2) \
MU_FOR_EACH_2_84(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86)

#define MU_FOR_EACH_2_88(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88) \
X(P1, P2) \
MU_FOR_EACH_2_86(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88)

#define MU_FOR_EACH_2_90(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90) \
X(P1, P2) \
MU_FOR_EACH_2_88(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90)

#define MU_FOR_EACH_2_92(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92) \
X(P1, P2) \
MU_FOR_EACH_2_90(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92)

#define MU_FOR_EACH_2_94(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94) \
X(P1, P2) \
MU_FOR_EACH_2_92(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94)

#define MU_FOR_EACH_2_96(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96) \
X(P1, P2) \
MU_FOR_EACH_2_94(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96)

#define MU_FOR_EACH_2_98(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98) \
X(P1, P2) \
MU_FOR_EACH_2_96(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98)

#define MU_FOR_EACH_2_100(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100) \
X(P1, P2) \
MU_FOR_EACH_2_98(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100)

#define MU_FOR_EACH_2_102(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102) \
X(P1, P2) \
MU_FOR_EACH_2_100(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102)

#define MU_FOR_EACH_2_104(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104) \
X(P1, P2) \
MU_FOR_EACH_2_102(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104)

#define MU_FOR_EACH_2_106(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106) \
X(P1, P2) \
MU_FOR_EACH_2_104(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106)

#define MU_FOR_EACH_2_108(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108) \
X(P1, P2) \
MU_FOR_EACH_2_106(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108)

#define MU_FOR_EACH_2_110(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110) \
X(P1, P2) \
MU_FOR_EACH_2_108(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110)

#define MU_FOR_EACH_2_112(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112) \
X(P1, P2) \
MU_FOR_EACH_2_110(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112)

#define MU_FOR_EACH_2_114(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114) \
X(P1, P2) \
MU_FOR_EACH_2_112(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114)

#define MU_FOR_EACH_2_116(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116) \
X(P1, P2) \
MU_FOR_EACH_2_114(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116)

#define MU_FOR_EACH_2_118(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118) \
X(P1, P2) \
MU_FOR_EACH_2_116(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118)

#define MU_FOR_EACH_2_120(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120) \
X(P1, P2) \
MU_FOR_EACH_2_118(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120)

#define MU_FOR_EACH_2_122(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122) \
X(P1, P2) \
MU_FOR_EACH_2_120(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122)

#define MU_FOR_EACH_2_124(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124) \
X(P1, P2) \
MU_FOR_EACH_2_122(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124)


#define MU_FOR_EACH_2_REVERSE_0(...)

#define MU_FOR_EACH_2_REVERSE_2(X, P1, P2) \
X(P1, P2)

#define MU_FOR_EACH_2_REVERSE_4(X, P1, P2, P3, P4) \
X(P3, P4) \
MU_FOR_EACH_2_REVERSE_2(X, P1, P2)

#define MU_FOR_EACH_2_REVERSE_6(X, P1, P2, P3, P4, P5, P6) \
X(P5, P6) \
MU_FOR_EACH_2_REVERSE_4(X, P1, P2, P3, P4)

#define MU_FOR_EACH_2_REVERSE_8(X, P1, P2, P3, P4, P5, P6, P7, P8) \
X(P7, P8) \
MU_FOR_EACH_2_REVERSE_6(X, P1, P2, P3, P4, P5, P6)

#define MU_FOR_EACH_2_REVERSE_10(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) \
X(P9, P10) \
MU_FOR_EACH_2_REVERSE_8(X, P1, P2, P3, P4, P5, P6, P7, P8)

#define MU_FOR_EACH_2_REVERSE_12(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) \
X(P11, P12) \
MU_FOR_EACH_2_REVERSE_10(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10)

#define MU_FOR_EACH_2_REVERSE_14(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14) \
X(P13, P14) \
MU_FOR_EACH_2_REVERSE_12(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)

#define MU_FOR_EACH_2_REVERSE_16(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16) \
X(P15, P16) \
MU_FOR_EACH_2_REVERSE_14(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14)

#define MU_FOR_EACH_2_REVERSE_18(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18) \
X(P17, P18) \
MU_FOR_EACH_2_REVERSE_16(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16)

#define MU_FOR_EACH_2_REVERSE_20(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20) \
X(P19, P20) \
MU_FOR_EACH_2_REVERSE_18(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18)

#define MU_FOR_EACH_2_REVERSE_22(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22) \
X(P21, P22) \
MU_FOR_EACH_2_REVERSE_20(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20)

#define MU_FOR_EACH_2_REVERSE_24(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24) \
X(P23, P24) \
MU_FOR_EACH_2_REVERSE_22(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22)

#define MU_FOR_EACH_2_REVERSE_26(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26) \
X(P25, P26) \
MU_FOR_EACH_2_REVERSE_24(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24)

#define MU_FOR_EACH_2_REVERSE_28(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28) \
X(P27, P28) \
MU_FOR_EACH_2_REVERSE_26(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26)

#define MU_FOR_EACH_2_REVERSE_30(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30) \
X(P29, P30) \
MU_FOR_EACH_2_REVERSE_28(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28)

#define MU_FOR_EACH_2_REVERSE_32(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32) \
X(P31, P32) \
MU_FOR_EACH_2_REVERSE_30(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30)

#define MU_FOR_EACH_2_REVERSE_34(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34) \
X(P33, P34) \
MU_FOR_EACH_2_REVERSE_32(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32)

#define MU_FOR_EACH_2_REVERSE_36(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36) \
X(P35, P36) \
MU_FOR_EACH_2_REVERSE_34(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34)

#define MU_FOR_EACH_2_REVERSE_38(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38) \
X(P37, P38) \
MU_FOR_EACH_2_REVERSE_36(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36)

#define MU_FOR_EACH_2_REVERSE_40(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40) \
X(P39, P40) \
MU_FOR_EACH_2_REVERSE_38(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38)

#define MU_FOR_EACH_2_REVERSE_42(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42) \
X(P41, P42) \
MU_FOR_EACH_2_REVERSE_40(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40)

#define MU_FOR_EACH_2_REVERSE_44(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44) \
X(P43, P44) \
MU_FOR_EACH_2_REVERSE_42(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42)

#define MU_FOR_EACH_2_REVERSE_46(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46) \
X(P45, P46) \
MU_FOR_EACH_2_REVERSE_44(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44)

#define MU_FOR_EACH_2_REVERSE_48(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48) \
X(P47, P48) \
MU_FOR_EACH_2_REVERSE_46(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46)

#define MU_FOR_EACH_2_REVERSE_50(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50) \
X(P49, P50) \
MU_FOR_EACH_2_REVERSE_48(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48)

#define MU_FOR_EACH_2_REVERSE_52(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52) \
X(P51, P52) \
MU_FOR_EACH_2_REVERSE_50(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50)

#define MU_FOR_EACH_2_REVERSE_54(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54) \
X(P53, P54) \
MU_FOR_EACH_2_REVERSE_52(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52)

#define MU_FOR_EACH_2_REVERSE_56(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56) \
X(P55, P56) \
MU_FOR_EACH_2_REVERSE_54(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54)

#define MU_FOR_EACH_2_REVERSE_58(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58) \
X(P57, P58) \
MU_FOR_EACH_2_REVERSE_56(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56)

#define MU_FOR_EACH_2_REVERSE_60(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60) \
X(P59, P60) \
MU_FOR_EACH_2_REVERSE_58(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58)

#define MU_FOR_EACH_2_REVERSE_62(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62) \
X(P61, P62) \
MU_FOR_EACH_2_REVERSE_60(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60)

#define MU_FOR_EACH_2_REVERSE_64(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64) \
X(P63, P64) \
MU_FOR_EACH_2_REVERSE_62(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62)

#define MU_FOR_EACH_2_REVERSE_66(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66) \
X(P65, P66) \
MU_FOR_EACH_2_REVERSE_64(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64)

#define MU_FOR_EACH_2_REVERSE_68(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68) \
X(P67, P68) \
MU_FOR_EACH_2_REVERSE_66(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66)

#define MU_FOR_EACH_2_REVERSE_70(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70) \
X(P69, P70) \
MU_FOR_EACH_2_REVERSE_68(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68)

#define MU_FOR_EACH_2_REVERSE_72(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72) \
X(P71, P72) \
MU_FOR_EACH_2_REVERSE_70(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70)

#define MU_FOR_EACH_2_REVERSE_74(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74) \
X(P73, P74) \
MU_FOR_EACH_2_REVERSE_72(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72)

#define MU_FOR_EACH_2_REVERSE_76(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76) \
X(P75, P76) \
MU_FOR_EACH_2_REVERSE_74(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74)

#define MU_FOR_EACH_2_REVERSE_78(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78) \
X(P77, P78) \
MU_FOR_EACH_2_REVERSE_76(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76)

#define MU_FOR_EACH_2_REVERSE_80(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80) \
X(P79, P80) \
MU_FOR_EACH_2_REVERSE_78(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78)

#define MU_FOR_EACH_2_REVERSE_82(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82) \
X(P81, P82) \
MU_FOR_EACH_2_REVERSE_80(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80)

#define MU_FOR_EACH_2_REVERSE_84(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84) \
X(P83, P84) \
MU_FOR_EACH_2_REVERSE_82(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82)

#define MU_FOR_EACH_2_REVERSE_86(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86) \
X(P85, P86) \
MU_FOR_EACH_2_REVERSE_84(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84)

#define MU_FOR_EACH_2_REVERSE_88(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88) \
X(P87, P88) \
MU_FOR_EACH_2_REVERSE_86(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86)

#define MU_FOR_EACH_2_REVERSE_90(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90) \
X(P89, P90) \
MU_FOR_EACH_2_REVERSE_88(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88)

#define MU_FOR_EACH_2_REVERSE_92(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92) \
X(P91, P92) \
MU_FOR_EACH_2_REVERSE_90(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90)

#define MU_FOR_EACH_2_REVERSE_94(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94) \
X(P93, P94) \
MU_FOR_EACH_2_REVERSE_92(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92)

#define MU_FOR_EACH_2_REVERSE_96(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96) \
X(P95, P96) \
MU_FOR_EACH_2_REVERSE_94(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94)

#define MU_FOR_EACH_2_REVERSE_98(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98) \
X(P97, P98) \
MU_FOR_EACH_2_REVERSE_96(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96)

#define MU_FOR_EACH_2_REVERSE_100(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100) \
X(P99, P100) \
MU_FOR_EACH_2_REVERSE_98(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98)

#define MU_FOR_EACH_2_REVERSE_102(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102) \
X(P101, P102) \
MU_FOR_EACH_2_REVERSE_100(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100)

#define MU_FOR_EACH_2_REVERSE_104(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104) \
X(P103, P104) \
MU_FOR_EACH_2_REVERSE_102(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102)

#define MU_FOR_EACH_2_REVERSE_106(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106) \
X(P105, P106) \
MU_FOR_EACH_2_REVERSE_104(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104)

#define MU_FOR_EACH_2_REVERSE_108(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108) \
X(P107, P108) \
MU_FOR_EACH_2_REVERSE_106(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106)

#define MU_FOR_EACH_2_REVERSE_110(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110) \
X(P109, P110) \
MU_FOR_EACH_2_REVERSE_108(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108)

#define MU_FOR_EACH_2_REVERSE_112(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112) \
X(P111, P112) \
MU_FOR_EACH_2_REVERSE_110(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110)

#define MU_FOR_EACH_2_REVERSE_114(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114) \
X(P113, P114) \
MU_FOR_EACH_2_REVERSE_112(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112)

#define MU_FOR_EACH_2_REVERSE_116(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116) \
X(P115, P116) \
MU_FOR_EACH_2_REVERSE_114(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114)

#define MU_FOR_EACH_2_REVERSE_118(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118) \
X(P117, P118) \
MU_FOR_EACH_2_REVERSE_116(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116)

#define MU_FOR_EACH_2_REVERSE_120(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120) \
X(P119, P120) \
MU_FOR_EACH_2_REVERSE_118(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118)

#define MU_FOR_EACH_2_REVERSE_122(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122) \
X(P121, P122) \
MU_FOR_EACH_2_REVERSE_120(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120)

#define MU_FOR_EACH_2_REVERSE_124(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124) \
X(P123, P124) \
MU_FOR_EACH_2_REVERSE_122(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122)


#define MU_FOR_EACH_1_COUNTED_0(...)

#define MU_FOR_EACH_1_COUNTED_1(X, P1) \
    X(1, P1)

#define MU_FOR_EACH_1_COUNTED_2(X, P1, P2) \
X(2, P1) \
MU_FOR_EACH_1_COUNTED_1(X, P2)

#define MU_FOR_EACH_1_COUNTED_3(X, P1, P2, P3) \
X(3, P1) \
MU_FOR_EACH_1_COUNTED_2(X, P2, P3)

#define MU_FOR_EACH_1_COUNTED_4(X, P1, P2, P3, P4) \
X(4, P1) \
MU_FOR_EACH_1_COUNTED_3(X, P2, P3, P4)

#define MU_FOR_EACH_1_COUNTED_5(X, P1, P2, P3, P4, P5) \
X(5, P1) \
MU_FOR_EACH_1_COUNTED_4(X, P2, P3, P4, P5)

#define MU_FOR_EACH_1_COUNTED_6(X, P1, P2, P3, P4, P5, P6) \
X(6, P1) \
MU_FOR_EACH_1_COUNTED_5(X, P2, P3, P4, P5, P6)

#define MU_FOR_EACH_1_COUNTED_7(X, P1, P2, P3, P4, P5, P6, P7) \
X(7, P1) \
MU_FOR_EACH_1_COUNTED_6(X, P2, P3, P4, P5, P6, P7)

#define MU_FOR_EACH_1_COUNTED_8(X, P1, P2, P3, P4, P5, P6, P7, P8) \
X(8, P1) \
MU_FOR_EACH_1_COUNTED_7(X, P2, P3, P4, P5, P6, P7, P8)

#define MU_FOR_EACH_1_COUNTED_9(X, P1, P2, P3, P4, P5, P6, P7, P8, P9) \
X(9, P1) \
MU_FOR_EACH_1_COUNTED_8(X, P2, P3, P4, P5, P6, P7, P8, P9)

#define MU_FOR_EACH_1_COUNTED_10(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) \
X(10, P1) \
MU_FOR_EACH_1_COUNTED_9(X, P2, P3, P4, P5, P6, P7, P8, P9, P10)

#define MU_FOR_EACH_1_COUNTED_11(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) \
X(11, P1) \
MU_FOR_EACH_1_COUNTED_10(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11)

#define MU_FOR_EACH_1_COUNTED_12(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) \
X(12, P1) \
MU_FOR_EACH_1_COUNTED_11(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)

#define MU_FOR_EACH_1_COUNTED_13(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) \
X(13, P1) \
MU_FOR_EACH_1_COUNTED_12(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13)

#define MU_FOR_EACH_1_COUNTED_14(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14) \
X(14, P1) \
MU_FOR_EACH_1_COUNTED_13(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14)

#define MU_FOR_EACH_1_COUNTED_15(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15) \
X(15, P1) \
MU_FOR_EACH_1_COUNTED_14(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15)

#define MU_FOR_EACH_1_COUNTED_16(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16) \
X(16, P1) \
MU_FOR_EACH_1_COUNTED_15(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16)

#define MU_FOR_EACH_1_COUNTED_17(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17) \
X(17, P1) \
MU_FOR_EACH_1_COUNTED_16(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17)

#define MU_FOR_EACH_1_COUNTED_18(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18) \
X(18, P1) \
MU_FOR_EACH_1_COUNTED_17(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18)

#define MU_FOR_EACH_1_COUNTED_19(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19) \
X(19, P1) \
MU_FOR_EACH_1_COUNTED_18(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19)

#define MU_FOR_EACH_1_COUNTED_20(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20) \
X(20, P1) \
MU_FOR_EACH_1_COUNTED_19(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20)

#define MU_FOR_EACH_1_COUNTED_21(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21) \
X(21, P1) \
MU_FOR_EACH_1_COUNTED_20(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21)

#define MU_FOR_EACH_1_COUNTED_22(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22) \
X(22, P1) \
MU_FOR_EACH_1_COUNTED_21(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22)

#define MU_FOR_EACH_1_COUNTED_23(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23) \
X(23, P1) \
MU_FOR_EACH_1_COUNTED_22(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23)

#define MU_FOR_EACH_1_COUNTED_24(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24) \
X(24, P1) \
MU_FOR_EACH_1_COUNTED_23(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24)

#define MU_FOR_EACH_1_COUNTED_25(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25) \
X(25, P1) \
MU_FOR_EACH_1_COUNTED_24(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25)

#define MU_FOR_EACH_1_COUNTED_26(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26) \
X(26, P1) \
MU_FOR_EACH_1_COUNTED_25(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26)

#define MU_FOR_EACH_1_COUNTED_27(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27) \
X(27, P1) \
MU_FOR_EACH_1_COUNTED_26(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27)

#define MU_FOR_EACH_1_COUNTED_28(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28) \
X(28, P1) \
MU_FOR_EACH_1_COUNTED_27(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28)

#define MU_FOR_EACH_1_COUNTED_29(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29) \
X(29, P1) \
MU_FOR_EACH_1_COUNTED_28(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29)

#define MU_FOR_EACH_1_COUNTED_30(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30) \
X(30, P1) \
MU_FOR_EACH_1_COUNTED_29(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30)

#define MU_FOR_EACH_1_COUNTED_31(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31) \
X(31, P1) \
MU_FOR_EACH_1_COUNTED_30(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31)

#define MU_FOR_EACH_1_COUNTED_32(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32) \
X(32, P1) \
MU_FOR_EACH_1_COUNTED_31(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32)

#define MU_FOR_EACH_1_COUNTED_33(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33) \
X(33, P1) \
MU_FOR_EACH_1_COUNTED_32(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33)

#define MU_FOR_EACH_1_COUNTED_34(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34) \
X(34, P1) \
MU_FOR_EACH_1_COUNTED_33(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34)

#define MU_FOR_EACH_1_COUNTED_35(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35) \
X(35, P1) \
MU_FOR_EACH_1_COUNTED_34(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35)

#define MU_FOR_EACH_1_COUNTED_36(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36) \
X(36, P1) \
MU_FOR_EACH_1_COUNTED_35(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36)

#define MU_FOR_EACH_1_COUNTED_37(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37) \
X(37, P1) \
MU_FOR_EACH_1_COUNTED_36(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37)

#define MU_FOR_EACH_1_COUNTED_38(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38) \
X(38, P1) \
MU_FOR_EACH_1_COUNTED_37(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38)

#define MU_FOR_EACH_1_COUNTED_39(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39) \
X(39, P1) \
MU_FOR_EACH_1_COUNTED_38(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39)

#define MU_FOR_EACH_1_COUNTED_40(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40) \
X(40, P1) \
MU_FOR_EACH_1_COUNTED_39(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40)

#define MU_FOR_EACH_1_COUNTED_41(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41) \
X(41, P1) \
MU_FOR_EACH_1_COUNTED_40(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41)

#define MU_FOR_EACH_1_COUNTED_42(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42) \
X(42, P1) \
MU_FOR_EACH_1_COUNTED_41(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42)

#define MU_FOR_EACH_1_COUNTED_43(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43) \
X(43, P1) \
MU_FOR_EACH_1_COUNTED_42(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43)

#define MU_FOR_EACH_1_COUNTED_44(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44) \
X(44, P1) \
MU_FOR_EACH_1_COUNTED_43(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44)

#define MU_FOR_EACH_1_COUNTED_45(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45) \
X(45, P1) \
MU_FOR_EACH_1_COUNTED_44(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45)

#define MU_FOR_EACH_1_COUNTED_46(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46) \
X(46, P1) \
MU_FOR_EACH_1_COUNTED_45(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46)

#define MU_FOR_EACH_1_COUNTED_47(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47) \
X(47, P1) \
MU_FOR_EACH_1_COUNTED_46(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47)

#define MU_FOR_EACH_1_COUNTED_48(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48) \
X(48, P1) \
MU_FOR_EACH_1_COUNTED_47(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48)

#define MU_FOR_EACH_1_COUNTED_49(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49) \
X(49, P1) \
MU_FOR_EACH_1_COUNTED_48(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49)

#define MU_FOR_EACH_1_COUNTED_50(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50) \
X(50, P1) \
MU_FOR_EACH_1_COUNTED_49(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50)

#define MU_FOR_EACH_1_COUNTED_51(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51) \
X(51, P1) \
MU_FOR_EACH_1_COUNTED_50(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51)

#define MU_FOR_EACH_1_COUNTED_52(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52) \
X(52, P1) \
MU_FOR_EACH_1_COUNTED_51(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52)

#define MU_FOR_EACH_1_COUNTED_53(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53) \
X(53, P1) \
MU_FOR_EACH_1_COUNTED_52(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53)

#define MU_FOR_EACH_1_COUNTED_54(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54) \
X(54, P1) \
MU_FOR_EACH_1_COUNTED_53(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54)

#define MU_FOR_EACH_1_COUNTED_55(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55) \
X(55, P1) \
MU_FOR_EACH_1_COUNTED_54(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55)

#define MU_FOR_EACH_1_COUNTED_56(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56) \
X(56, P1) \
MU_FOR_EACH_1_COUNTED_55(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56)

#define MU_FOR_EACH_1_COUNTED_57(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57) \
X(57, P1) \
MU_FOR_EACH_1_COUNTED_56(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57)

#define MU_FOR_EACH_1_COUNTED_58(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58) \
X(58, P1) \
MU_FOR_EACH_1_COUNTED_57(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58)

#define MU_FOR_EACH_1_COUNTED_59(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59) \
X(59, P1) \
MU_FOR_EACH_1_COUNTED_58(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59)

#define MU_FOR_EACH_1_COUNTED_60(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60) \
X(60, P1) \
MU_FOR_EACH_1_COUNTED_59(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60)

#define MU_FOR_EACH_1_COUNTED_61(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61) \
X(61, P1) \
MU_FOR_EACH_1_COUNTED_60(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61)

#define MU_FOR_EACH_1_COUNTED_62(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62) \
X(62, P1) \
MU_FOR_EACH_1_COUNTED_61(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62)

#define MU_FOR_EACH_1_COUNTED_63(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63) \
X(63, P1) \
MU_FOR_EACH_1_COUNTED_62(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63)

#define MU_FOR_EACH_1_COUNTED_64(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64) \
X(64, P1) \
MU_FOR_EACH_1_COUNTED_63(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64)

#define MU_FOR_EACH_1_COUNTED_65(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65) \
X(65, P1) \
MU_FOR_EACH_1_COUNTED_64(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65)

#define MU_FOR_EACH_1_COUNTED_66(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66) \
X(66, P1) \
MU_FOR_EACH_1_COUNTED_65(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66)

#define MU_FOR_EACH_1_COUNTED_67(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67) \
X(67, P1) \
MU_FOR_EACH_1_COUNTED_66(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67)

#define MU_FOR_EACH_1_COUNTED_68(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68) \
X(68, P1) \
MU_FOR_EACH_1_COUNTED_67(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68)

#define MU_FOR_EACH_1_COUNTED_69(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69) \
X(69, P1) \
MU_FOR_EACH_1_COUNTED_68(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69)

#define MU_FOR_EACH_1_COUNTED_70(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70) \
X(70, P1) \
MU_FOR_EACH_1_COUNTED_69(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70)

#define MU_FOR_EACH_1_COUNTED_71(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71) \
X(71, P1) \
MU_FOR_EACH_1_COUNTED_70(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71)

#define MU_FOR_EACH_1_COUNTED_72(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72) \
X(72, P1) \
MU_FOR_EACH_1_COUNTED_71(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72)

#define MU_FOR_EACH_1_COUNTED_73(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73) \
X(73, P1) \
MU_FOR_EACH_1_COUNTED_72(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73)

#define MU_FOR_EACH_1_COUNTED_74(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74) \
X(74, P1) \
MU_FOR_EACH_1_COUNTED_73(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74)

#define MU_FOR_EACH_1_COUNTED_75(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75) \
X(75, P1) \
MU_FOR_EACH_1_COUNTED_74(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75)

#define MU_FOR_EACH_1_COUNTED_76(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76) \
X(76, P1) \
MU_FOR_EACH_1_COUNTED_75(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76)

#define MU_FOR_EACH_1_COUNTED_77(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77) \
X(77, P1) \
MU_FOR_EACH_1_COUNTED_76(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77)

#define MU_FOR_EACH_1_COUNTED_78(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78) \
X(78, P1) \
MU_FOR_EACH_1_COUNTED_77(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78)

#define MU_FOR_EACH_1_COUNTED_79(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79) \
X(79, P1) \
MU_FOR_EACH_1_COUNTED_78(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79)

#define MU_FOR_EACH_1_COUNTED_80(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80) \
X(80, P1) \
MU_FOR_EACH_1_COUNTED_79(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80)

#define MU_FOR_EACH_1_COUNTED_81(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81) \
X(81, P1) \
MU_FOR_EACH_1_COUNTED_80(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81)

#define MU_FOR_EACH_1_COUNTED_82(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82) \
X(82, P1) \
MU_FOR_EACH_1_COUNTED_81(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82)

#define MU_FOR_EACH_1_COUNTED_83(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83) \
X(83, P1) \
MU_FOR_EACH_1_COUNTED_82(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83)

#define MU_FOR_EACH_1_COUNTED_84(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84) \
X(84, P1) \
MU_FOR_EACH_1_COUNTED_83(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84)

#define MU_FOR_EACH_1_COUNTED_85(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85) \
X(85, P1) \
MU_FOR_EACH_1_COUNTED_84(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85)

#define MU_FOR_EACH_1_COUNTED_86(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86) \
X(86, P1) \
MU_FOR_EACH_1_COUNTED_85(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86)

#define MU_FOR_EACH_1_COUNTED_87(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87) \
X(87, P1) \
MU_FOR_EACH_1_COUNTED_86(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87)

#define MU_FOR_EACH_1_COUNTED_88(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88) \
X(88, P1) \
MU_FOR_EACH_1_COUNTED_87(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88)

#define MU_FOR_EACH_1_COUNTED_89(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89) \
X(89, P1) \
MU_FOR_EACH_1_COUNTED_88(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89)

#define MU_FOR_EACH_1_COUNTED_90(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90) \
X(90, P1) \
MU_FOR_EACH_1_COUNTED_89(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90)

#define MU_FOR_EACH_1_COUNTED_91(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91) \
X(91, P1) \
MU_FOR_EACH_1_COUNTED_90(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91)

#define MU_FOR_EACH_1_COUNTED_92(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92) \
X(92, P1) \
MU_FOR_EACH_1_COUNTED_91(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92)

#define MU_FOR_EACH_1_COUNTED_93(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93) \
X(93, P1) \
MU_FOR_EACH_1_COUNTED_92(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93)

#define MU_FOR_EACH_1_COUNTED_94(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94) \
X(94, P1) \
MU_FOR_EACH_1_COUNTED_93(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94)

#define MU_FOR_EACH_1_COUNTED_95(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95) \
X(95, P1) \
MU_FOR_EACH_1_COUNTED_94(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95)

#define MU_FOR_EACH_1_COUNTED_96(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96) \
X(96, P1) \
MU_FOR_EACH_1_COUNTED_95(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96)

#define MU_FOR_EACH_1_COUNTED_97(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97) \
X(97, P1) \
MU_FOR_EACH_1_COUNTED_96(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97)

#define MU_FOR_EACH_1_COUNTED_98(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98) \
X(98, P1) \
MU_FOR_EACH_1_COUNTED_97(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98)

#define MU_FOR_EACH_1_COUNTED_99(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99) \
X(99, P1) \
MU_FOR_EACH_1_COUNTED_98(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99)

#define MU_FOR_EACH_1_COUNTED_100(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100) \
X(100, P1) \
MU_FOR_EACH_1_COUNTED_99(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100)

#define MU_FOR_EACH_1_COUNTED_101(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101) \
X(101, P1) \
MU_FOR_EACH_1_COUNTED_100(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101)

#define MU_FOR_EACH_1_COUNTED_102(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102) \
X(102, P1) \
MU_FOR_EACH_1_COUNTED_101(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102)

#define MU_FOR_EACH_1_COUNTED_103(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103) \
X(103, P1) \
MU_FOR_EACH_1_COUNTED_102(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103)

#define MU_FOR_EACH_1_COUNTED_104(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104) \
X(104, P1) \
MU_FOR_EACH_1_COUNTED_103(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104)

#define MU_FOR_EACH_1_COUNTED_105(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105) \
X(105, P1) \
MU_FOR_EACH_1_COUNTED_104(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105)

#define MU_FOR_EACH_1_COUNTED_106(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106) \
X(106, P1) \
MU_FOR_EACH_1_COUNTED_105(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106)

#define MU_FOR_EACH_1_COUNTED_107(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107) \
X(107, P1) \
MU_FOR_EACH_1_COUNTED_106(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107)

#define MU_FOR_EACH_1_COUNTED_108(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108) \
X(108, P1) \
MU_FOR_EACH_1_COUNTED_107(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108)

#define MU_FOR_EACH_1_COUNTED_109(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109) \
X(109, P1) \
MU_FOR_EACH_1_COUNTED_108(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109)

#define MU_FOR_EACH_1_COUNTED_110(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110) \
X(110, P1) \
MU_FOR_EACH_1_COUNTED_109(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110)

#define MU_FOR_EACH_1_COUNTED_111(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111) \
X(111, P1) \
MU_FOR_EACH_1_COUNTED_110(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111)

#define MU_FOR_EACH_1_COUNTED_112(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112) \
X(112, P1) \
MU_FOR_EACH_1_COUNTED_111(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112)

#define MU_FOR_EACH_1_COUNTED_113(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113) \
X(113, P1) \
MU_FOR_EACH_1_COUNTED_112(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113)

#define MU_FOR_EACH_1_COUNTED_114(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114) \
X(114, P1) \
MU_FOR_EACH_1_COUNTED_113(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114)

#define MU_FOR_EACH_1_COUNTED_115(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115) \
X(115, P1) \
MU_FOR_EACH_1_COUNTED_114(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115)

#define MU_FOR_EACH_1_COUNTED_116(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116) \
X(116, P1) \
MU_FOR_EACH_1_COUNTED_115(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116)

#define MU_FOR_EACH_1_COUNTED_117(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117) \
X(117, P1) \
MU_FOR_EACH_1_COUNTED_116(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117)

#define MU_FOR_EACH_1_COUNTED_118(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118) \
X(118, P1) \
MU_FOR_EACH_1_COUNTED_117(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118)

#define MU_FOR_EACH_1_COUNTED_119(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119) \
X(119, P1) \
MU_FOR_EACH_1_COUNTED_118(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119)

#define MU_FOR_EACH_1_COUNTED_120(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120) \
X(120, P1) \
MU_FOR_EACH_1_COUNTED_119(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120)

#define MU_FOR_EACH_1_COUNTED_121(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121) \
X(121, P1) \
MU_FOR_EACH_1_COUNTED_120(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121)

#define MU_FOR_EACH_1_COUNTED_122(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122) \
X(122, P1) \
MU_FOR_EACH_1_COUNTED_121(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122)

#define MU_FOR_EACH_1_COUNTED_123(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123) \
X(123, P1) \
MU_FOR_EACH_1_COUNTED_122(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123)

#define MU_FOR_EACH_1_COUNTED_124(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124) \
X(124, P1) \
MU_FOR_EACH_1_COUNTED_123(X, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124)


#define MU_FOR_EACH_2_COUNTED_0(...)

#define MU_FOR_EACH_2_COUNTED_2(X, P1, P2) \
    X(2, P1, P2)

#define MU_FOR_EACH_2_COUNTED_4(X, P1, P2, P3, P4) \
X(4, P1, P2) \
MU_FOR_EACH_2_COUNTED_2(X, P3, P4)

#define MU_FOR_EACH_2_COUNTED_6(X, P1, P2, P3, P4, P5, P6) \
X(6, P1, P2) \
MU_FOR_EACH_2_COUNTED_4(X, P3, P4, P5, P6)

#define MU_FOR_EACH_2_COUNTED_8(X, P1, P2, P3, P4, P5, P6, P7, P8) \
X(8, P1, P2) \
MU_FOR_EACH_2_COUNTED_6(X, P3, P4, P5, P6, P7, P8)

#define MU_FOR_EACH_2_COUNTED_10(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) \
X(10, P1, P2) \
MU_FOR_EACH_2_COUNTED_8(X, P3, P4, P5, P6, P7, P8, P9, P10)

#define MU_FOR_EACH_2_COUNTED_12(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) \
X(12, P1, P2) \
MU_FOR_EACH_2_COUNTED_10(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)

#define MU_FOR_EACH_2_COUNTED_14(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14) \
X(14, P1, P2) \
MU_FOR_EACH_2_COUNTED_12(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14)

#define MU_FOR_EACH_2_COUNTED_16(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16) \
X(16, P1, P2) \
MU_FOR_EACH_2_COUNTED_14(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16)

#define MU_FOR_EACH_2_COUNTED_18(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18) \
X(18, P1, P2) \
MU_FOR_EACH_2_COUNTED_16(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18)

#define MU_FOR_EACH_2_COUNTED_20(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20) \
X(20, P1, P2) \
MU_FOR_EACH_2_COUNTED_18(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20)

#define MU_FOR_EACH_2_COUNTED_22(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22) \
X(22, P1, P2) \
MU_FOR_EACH_2_COUNTED_20(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22)

#define MU_FOR_EACH_2_COUNTED_24(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24) \
X(24, P1, P2) \
MU_FOR_EACH_2_COUNTED_22(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24)

#define MU_FOR_EACH_2_COUNTED_26(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26) \
X(26, P1, P2) \
MU_FOR_EACH_2_COUNTED_24(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26)

#define MU_FOR_EACH_2_COUNTED_28(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28) \
X(28, P1, P2) \
MU_FOR_EACH_2_COUNTED_26(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28)

#define MU_FOR_EACH_2_COUNTED_30(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30) \
X(30, P1, P2) \
MU_FOR_EACH_2_COUNTED_28(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30)

#define MU_FOR_EACH_2_COUNTED_32(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32) \
X(32, P1, P2) \
MU_FOR_EACH_2_COUNTED_30(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32)

#define MU_FOR_EACH_2_COUNTED_34(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34) \
X(34, P1, P2) \
MU_FOR_EACH_2_COUNTED_32(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34)

#define MU_FOR_EACH_2_COUNTED_36(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36) \
X(36, P1, P2) \
MU_FOR_EACH_2_COUNTED_34(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36)

#define MU_FOR_EACH_2_COUNTED_38(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38) \
X(38, P1, P2) \
MU_FOR_EACH_2_COUNTED_36(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38)

#define MU_FOR_EACH_2_COUNTED_40(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40) \
X(40, P1, P2) \
MU_FOR_EACH_2_COUNTED_38(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40)

#define MU_FOR_EACH_2_COUNTED_42(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42) \
X(42, P1, P2) \
MU_FOR_EACH_2_COUNTED_40(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42)

#define MU_FOR_EACH_2_COUNTED_44(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44) \
X(44, P1, P2) \
MU_FOR_EACH_2_COUNTED_42(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44)

#define MU_FOR_EACH_2_COUNTED_46(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46) \
X(46, P1, P2) \
MU_FOR_EACH_2_COUNTED_44(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46)

#define MU_FOR_EACH_2_COUNTED_48(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48) \
X(48, P1, P2) \
MU_FOR_EACH_2_COUNTED_46(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48)

#define MU_FOR_EACH_2_COUNTED_50(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50) \
X(50, P1, P2) \
MU_FOR_EACH_2_COUNTED_48(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50)

#define MU_FOR_EACH_2_COUNTED_52(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52) \
X(52, P1, P2) \
MU_FOR_EACH_2_COUNTED_50(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52)

#define MU_FOR_EACH_2_COUNTED_54(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54) \
X(54, P1, P2) \
MU_FOR_EACH_2_COUNTED_52(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54)

#define MU_FOR_EACH_2_COUNTED_56(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56) \
X(56, P1, P2) \
MU_FOR_EACH_2_COUNTED_54(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56)

#define MU_FOR_EACH_2_COUNTED_58(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58) \
X(58, P1, P2) \
MU_FOR_EACH_2_COUNTED_56(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58)

#define MU_FOR_EACH_2_COUNTED_60(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60) \
X(60, P1, P2) \
MU_FOR_EACH_2_COUNTED_58(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60)

#define MU_FOR_EACH_2_COUNTED_62(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62) \
X(62, P1, P2) \
MU_FOR_EACH_2_COUNTED_60(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62)

#define MU_FOR_EACH_2_COUNTED_64(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64) \
X(64, P1, P2) \
MU_FOR_EACH_2_COUNTED_62(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64)

#define MU_FOR_EACH_2_COUNTED_66(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66) \
X(66, P1, P2) \
MU_FOR_EACH_2_COUNTED_64(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66)

#define MU_FOR_EACH_2_COUNTED_68(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68) \
X(68, P1, P2) \
MU_FOR_EACH_2_COUNTED_66(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68)

#define MU_FOR_EACH_2_COUNTED_70(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70) \
X(70, P1, P2) \
MU_FOR_EACH_2_COUNTED_68(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70)

#define MU_FOR_EACH_2_COUNTED_72(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72) \
X(72, P1, P2) \
MU_FOR_EACH_2_COUNTED_70(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72)

#define MU_FOR_EACH_2_COUNTED_74(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74) \
X(74, P1, P2) \
MU_FOR_EACH_2_COUNTED_72(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74)

#define MU_FOR_EACH_2_COUNTED_76(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76) \
X(76, P1, P2) \
MU_FOR_EACH_2_COUNTED_74(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76)

#define MU_FOR_EACH_2_COUNTED_78(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78) \
X(78, P1, P2) \
MU_FOR_EACH_2_COUNTED_76(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78)

#define MU_FOR_EACH_2_COUNTED_80(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80) \
X(80, P1, P2) \
MU_FOR_EACH_2_COUNTED_78(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80)

#define MU_FOR_EACH_2_COUNTED_82(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82) \
X(82, P1, P2) \
MU_FOR_EACH_2_COUNTED_80(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82)

#define MU_FOR_EACH_2_COUNTED_84(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84) \
X(84, P1, P2) \
MU_FOR_EACH_2_COUNTED_82(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84)

#define MU_FOR_EACH_2_COUNTED_86(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86) \
X(86, P1, P2) \
MU_FOR_EACH_2_COUNTED_84(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86)

#define MU_FOR_EACH_2_COUNTED_88(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88) \
X(88, P1, P2) \
MU_FOR_EACH_2_COUNTED_86(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88)

#define MU_FOR_EACH_2_COUNTED_90(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90) \
X(90, P1, P2) \
MU_FOR_EACH_2_COUNTED_88(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90)

#define MU_FOR_EACH_2_COUNTED_92(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92) \
X(92, P1, P2) \
MU_FOR_EACH_2_COUNTED_90(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92)

#define MU_FOR_EACH_2_COUNTED_94(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94) \
X(94, P1, P2) \
MU_FOR_EACH_2_COUNTED_92(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94)

#define MU_FOR_EACH_2_COUNTED_96(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96) \
X(96, P1, P2) \
MU_FOR_EACH_2_COUNTED_94(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96)

#define MU_FOR_EACH_2_COUNTED_98(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98) \
X(98, P1, P2) \
MU_FOR_EACH_2_COUNTED_96(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98)

#define MU_FOR_EACH_2_COUNTED_100(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100) \
X(100, P1, P2) \
MU_FOR_EACH_2_COUNTED_98(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100)

#define MU_FOR_EACH_2_COUNTED_102(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102) \
X(102, P1, P2) \
MU_FOR_EACH_2_COUNTED_100(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102)

#define MU_FOR_EACH_2_COUNTED_104(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104) \
X(104, P1, P2) \
MU_FOR_EACH_2_COUNTED_102(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104)

#define MU_FOR_EACH_2_COUNTED_106(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106) \
X(106, P1, P2) \
MU_FOR_EACH_2_COUNTED_104(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106)

#define MU_FOR_EACH_2_COUNTED_108(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108) \
X(108, P1, P2) \
MU_FOR_EACH_2_COUNTED_106(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108)

#define MU_FOR_EACH_2_COUNTED_110(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110) \
X(110, P1, P2) \
MU_FOR_EACH_2_COUNTED_108(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110)

#define MU_FOR_EACH_2_COUNTED_112(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112) \
X(112, P1, P2) \
MU_FOR_EACH_2_COUNTED_110(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112)

#define MU_FOR_EACH_2_COUNTED_114(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114) \
X(114, P1, P2) \
MU_FOR_EACH_2_COUNTED_112(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114)

#define MU_FOR_EACH_2_COUNTED_116(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116) \
X(116, P1, P2) \
MU_FOR_EACH_2_COUNTED_114(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116)

#define MU_FOR_EACH_2_COUNTED_118(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118) \
X(118, P1, P2) \
MU_FOR_EACH_2_COUNTED_116(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118)

#define MU_FOR_EACH_2_COUNTED_120(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120) \
X(120, P1, P2) \
MU_FOR_EACH_2_COUNTED_118(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120)

#define MU_FOR_EACH_2_COUNTED_122(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122) \
X(122, P1, P2) \
MU_FOR_EACH_2_COUNTED_120(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122)

#define MU_FOR_EACH_2_COUNTED_124(X, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124) \
X(124, P1, P2) \
MU_FOR_EACH_2_COUNTED_122(X, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62, P63, P64, P65, P66, P67, P68, P69, P70, P71, P72, P73, P74, P75, P76, P77, P78, P79, P80, P81, P82, P83, P84, P85, P86, P87, P88, P89, P90, P91, P92, P93, P94, P95, P96, P97, P98, P99, P100, P101, P102, P103, P104, P105, P106, P107, P108, P109, P110, P111, P112, P113, P114, P115, P116, P117, P118, P119, P120, P121, P122, P123, P124)


#ifdef _MSC_VER
#define MU_FOR_EACH_2(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_, MU_C1(MU_COUNT_ARG(__VA_ARGS__))) MU_LPAREN MACRO_TO_INVOKE, __VA_ARGS__)
/*the COUNTED breed of MU_FOR_EACH macro invokes a macro with 3 parameters: 1st being the count of invocation. For example.
MU_FOR_EACH_2_COUNTER(MACRO, a,b,c,d,e,f) will result in 
MACRO(6, a,b)
MACRO(4, c,d)
MACRO(2, e,f)
This macro exists because we need a "stop condition" in outputting COMMA... when calling a function f(a,b,c,d) cannot be f(a,b,c,d,) <=doesn't compile (as opposed to enum definition)
*/
#define MU_FOR_EACH_2_COUNTED(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_COUNTED_, MU_C1(MU_COUNT_ARG(__VA_ARGS__))) MU_LPAREN MACRO_TO_INVOKE, __VA_ARGS__)
#define MU_FOR_EACH_1_COUNTED(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_1_COUNTED_, MU_C1(MU_COUNT_ARG(__VA_ARGS__))) MU_LPAREN MACRO_TO_INVOKE, __VA_ARGS__)

/*MU_FOR_EACH_2_REVERSE acts just like MU_FOR_EACH_2, but in reverse order. Example:
MU_FOR_EACH_2_REVERSE(X,a,b,c,d,e,f) => X(e,f) X(c,d) X (a, b) in this order */
#define MU_FOR_EACH_2_REVERSE(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_REVERSE_, MU_C1(MU_COUNT_ARG(__VA_ARGS__))) MU_LPAREN MACRO_TO_INVOKE, __VA_ARGS__)
#else
#define MU_FOR_EACH_2(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_, MU_C1(MU_COUNT_ARG(__VA_ARGS__))) ( MACRO_TO_INVOKE, __VA_ARGS__)
#define MU_FOR_EACH_2_COUNTED(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_COUNTED_, MU_C1(MU_COUNT_ARG(__VA_ARGS__))) ( MACRO_TO_INVOKE,  __VA_ARGS__)
#define MU_FOR_EACH_1_COUNTED(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_1_COUNTED_, MU_C1(MU_COUNT_ARG(__VA_ARGS__))) ( MACRO_TO_INVOKE,  __VA_ARGS__)
#define MU_FOR_EACH_2_REVERSE(MACRO_TO_INVOKE, ...) MU_C2(MU_FOR_EACH_2_REVERSE_, MU_C1(MU_COUNT_ARG(__VA_ARGS__))) ( MACRO_TO_INVOKE, __VA_ARGS__)
#endif

#ifdef _MSC_VER
#define MU_EXPAND_OR_MU_C1(x) x
#else
#define MU_EXPAND_OR_MU_C1(...) __VA_ARGS__
#endif

#define MU_EXPAND_ARGS(...) __VA_ARGS__
#define MU_EXPAND_TWICE(...) MU_EXPAND_ARGS(__VA_ARGS__)

#define MU_DO_0(MACRO, ...) \
MACRO(0, __VA_ARGS__)

#define MU_DO_1(MACRO, ...) \
MACRO(1, __VA_ARGS__) \
MU_DO_0(MACRO, __VA_ARGS__)


#define MU_DO_2(MACRO, ...) \
MACRO(2, __VA_ARGS__) \
MU_DO_1(MACRO, __VA_ARGS__)


#define MU_DO_3(MACRO, ...) \
MACRO(3, __VA_ARGS__) \
MU_DO_2(MACRO, __VA_ARGS__)


#define MU_DO_4(MACRO, ...) \
MACRO(4, __VA_ARGS__) \
MU_DO_3(MACRO, __VA_ARGS__)


#define MU_DO_5(MACRO, ...) \
MACRO(5, __VA_ARGS__) \
MU_DO_4(MACRO, __VA_ARGS__)


#define MU_DO_6(MACRO, ...) \
MACRO(6, __VA_ARGS__) \
MU_DO_5(MACRO, __VA_ARGS__)


#define MU_DO_7(MACRO, ...) \
MACRO(7, __VA_ARGS__) \
MU_DO_6(MACRO, __VA_ARGS__)


#define MU_DO_8(MACRO, ...) \
MACRO(8, __VA_ARGS__) \
MU_DO_7(MACRO, __VA_ARGS__)


#define MU_DO_9(MACRO, ...) \
MACRO(9, __VA_ARGS__) \
MU_DO_8(MACRO, __VA_ARGS__)


#define MU_DO_10(MACRO, ...) \
MACRO(10, __VA_ARGS__) \
MU_DO_9(MACRO, __VA_ARGS__)


#define MU_DO_11(MACRO, ...) \
MACRO(11, __VA_ARGS__) \
MU_DO_10(MACRO, __VA_ARGS__)


#define MU_DO_12(MACRO, ...) \
MACRO(12, __VA_ARGS__) \
MU_DO_11(MACRO, __VA_ARGS__)


#define MU_DO_13(MACRO, ...) \
MACRO(13, __VA_ARGS__) \
MU_DO_12(MACRO, __VA_ARGS__)


#define MU_DO_14(MACRO, ...) \
MACRO(14, __VA_ARGS__) \
MU_DO_13(MACRO, __VA_ARGS__)


#define MU_DO_15(MACRO, ...) \
MACRO(15, __VA_ARGS__) \
MU_DO_14(MACRO, __VA_ARGS__)


#define MU_DO_16(MACRO, ...) \
MACRO(16, __VA_ARGS__) \
MU_DO_15(MACRO, __VA_ARGS__)


#define MU_DO_17(MACRO, ...) \
MACRO(17, __VA_ARGS__) \
MU_DO_16(MACRO, __VA_ARGS__)


#define MU_DO_18(MACRO, ...) \
MACRO(18, __VA_ARGS__) \
MU_DO_17(MACRO, __VA_ARGS__)


#define MU_DO_19(MACRO, ...) \
MACRO(19, __VA_ARGS__) \
MU_DO_18(MACRO, __VA_ARGS__)


#define MU_DO_20(MACRO, ...) \
MACRO(20, __VA_ARGS__) \
MU_DO_19(MACRO, __VA_ARGS__)


#define MU_DO_21(MACRO, ...) \
MACRO(21, __VA_ARGS__) \
MU_DO_20(MACRO, __VA_ARGS__)


#define MU_DO_22(MACRO, ...) \
MACRO(22, __VA_ARGS__) \
MU_DO_21(MACRO, __VA_ARGS__)


#define MU_DO_23(MACRO, ...) \
MACRO(23, __VA_ARGS__) \
MU_DO_22(MACRO, __VA_ARGS__)


#define MU_DO_24(MACRO, ...) \
MACRO(24, __VA_ARGS__) \
MU_DO_23(MACRO, __VA_ARGS__)


#define MU_DO_25(MACRO, ...) \
MACRO(25, __VA_ARGS__) \
MU_DO_24(MACRO, __VA_ARGS__)


#define MU_DO_26(MACRO, ...) \
MACRO(26, __VA_ARGS__) \
MU_DO_25(MACRO, __VA_ARGS__)


#define MU_DO_27(MACRO, ...) \
MACRO(27, __VA_ARGS__) \
MU_DO_26(MACRO, __VA_ARGS__)


#define MU_DO_28(MACRO, ...) \
MACRO(28, __VA_ARGS__) \
MU_DO_27(MACRO, __VA_ARGS__)


#define MU_DO_29(MACRO, ...) \
MACRO(29, __VA_ARGS__) \
MU_DO_28(MACRO, __VA_ARGS__)


#define MU_DO_30(MACRO, ...) \
MACRO(30, __VA_ARGS__) \
MU_DO_29(MACRO, __VA_ARGS__)


#define MU_DO_31(MACRO, ...) \
MACRO(31, __VA_ARGS__) \
MU_DO_30(MACRO, __VA_ARGS__)


#define MU_DO_32(MACRO, ...) \
MACRO(32, __VA_ARGS__) \
MU_DO_31(MACRO, __VA_ARGS__)


#define MU_DO_33(MACRO, ...) \
MACRO(33, __VA_ARGS__) \
MU_DO_32(MACRO, __VA_ARGS__)


#define MU_DO_34(MACRO, ...) \
MACRO(34, __VA_ARGS__) \
MU_DO_33(MACRO, __VA_ARGS__)


#define MU_DO_35(MACRO, ...) \
MACRO(35, __VA_ARGS__) \
MU_DO_34(MACRO, __VA_ARGS__)


#define MU_DO_36(MACRO, ...) \
MACRO(36, __VA_ARGS__) \
MU_DO_35(MACRO, __VA_ARGS__)


#define MU_DO_37(MACRO, ...) \
MACRO(37, __VA_ARGS__) \
MU_DO_36(MACRO, __VA_ARGS__)


#define MU_DO_38(MACRO, ...) \
MACRO(38, __VA_ARGS__) \
MU_DO_37(MACRO, __VA_ARGS__)


#define MU_DO_39(MACRO, ...) \
MACRO(39, __VA_ARGS__) \
MU_DO_38(MACRO, __VA_ARGS__)


#define MU_DO_40(MACRO, ...) \
MACRO(40, __VA_ARGS__) \
MU_DO_39(MACRO, __VA_ARGS__)


#define MU_DO_41(MACRO, ...) \
MACRO(41, __VA_ARGS__) \
MU_DO_40(MACRO, __VA_ARGS__)


#define MU_DO_42(MACRO, ...) \
MACRO(42, __VA_ARGS__) \
MU_DO_41(MACRO, __VA_ARGS__)


#define MU_DO_43(MACRO, ...) \
MACRO(43, __VA_ARGS__) \
MU_DO_42(MACRO, __VA_ARGS__)


#define MU_DO_44(MACRO, ...) \
MACRO(44, __VA_ARGS__) \
MU_DO_43(MACRO, __VA_ARGS__)


#define MU_DO_45(MACRO, ...) \
MACRO(45, __VA_ARGS__) \
MU_DO_44(MACRO, __VA_ARGS__)


#define MU_DO_46(MACRO, ...) \
MACRO(46, __VA_ARGS__) \
MU_DO_45(MACRO, __VA_ARGS__)


#define MU_DO_47(MACRO, ...) \
MACRO(47, __VA_ARGS__) \
MU_DO_46(MACRO, __VA_ARGS__)


#define MU_DO_48(MACRO, ...) \
MACRO(48, __VA_ARGS__) \
MU_DO_47(MACRO, __VA_ARGS__)


#define MU_DO_49(MACRO, ...) \
MACRO(49, __VA_ARGS__) \
MU_DO_48(MACRO, __VA_ARGS__)


#define MU_DO_50(MACRO, ...) \
MACRO(50, __VA_ARGS__) \
MU_DO_49(MACRO, __VA_ARGS__)


#define MU_DO_51(MACRO, ...) \
MACRO(51, __VA_ARGS__) \
MU_DO_50(MACRO, __VA_ARGS__)


#define MU_DO_52(MACRO, ...) \
MACRO(52, __VA_ARGS__) \
MU_DO_51(MACRO, __VA_ARGS__)


#define MU_DO_53(MACRO, ...) \
MACRO(53, __VA_ARGS__) \
MU_DO_52(MACRO, __VA_ARGS__)


#define MU_DO_54(MACRO, ...) \
MACRO(54, __VA_ARGS__) \
MU_DO_53(MACRO, __VA_ARGS__)


#define MU_DO_55(MACRO, ...) \
MACRO(55, __VA_ARGS__) \
MU_DO_54(MACRO, __VA_ARGS__)


#define MU_DO_56(MACRO, ...) \
MACRO(56, __VA_ARGS__) \
MU_DO_55(MACRO, __VA_ARGS__)


#define MU_DO_57(MACRO, ...) \
MACRO(57, __VA_ARGS__) \
MU_DO_56(MACRO, __VA_ARGS__)


#define MU_DO_58(MACRO, ...) \
MACRO(58, __VA_ARGS__) \
MU_DO_57(MACRO, __VA_ARGS__)


#define MU_DO_59(MACRO, ...) \
MACRO(59, __VA_ARGS__) \
MU_DO_58(MACRO, __VA_ARGS__)


#define MU_DO_60(MACRO, ...) \
MACRO(60, __VA_ARGS__) \
MU_DO_59(MACRO, __VA_ARGS__)


#define MU_DO_61(MACRO, ...) \
MACRO(61, __VA_ARGS__) \
MU_DO_60(MACRO, __VA_ARGS__)


#define MU_DO_62(MACRO, ...) \
MACRO(62, __VA_ARGS__) \
MU_DO_61(MACRO, __VA_ARGS__)


#define MU_DO_63(MACRO, ...) \
MACRO(63, __VA_ARGS__) \
MU_DO_62(MACRO, __VA_ARGS__)


#define MU_DO_64(MACRO, ...) \
MACRO(64, __VA_ARGS__) \
MU_DO_63(MACRO, __VA_ARGS__)


#define MU_DO_65(MACRO, ...) \
MACRO(65, __VA_ARGS__) \
MU_DO_64(MACRO, __VA_ARGS__)


#define MU_DO_66(MACRO, ...) \
MACRO(66, __VA_ARGS__) \
MU_DO_65(MACRO, __VA_ARGS__)


#define MU_DO_67(MACRO, ...) \
MACRO(67, __VA_ARGS__) \
MU_DO_66(MACRO, __VA_ARGS__)


#define MU_DO_68(MACRO, ...) \
MACRO(68, __VA_ARGS__) \
MU_DO_67(MACRO, __VA_ARGS__)


#define MU_DO_69(MACRO, ...) \
MACRO(69, __VA_ARGS__) \
MU_DO_68(MACRO, __VA_ARGS__)


#define MU_DO_70(MACRO, ...) \
MACRO(70, __VA_ARGS__) \
MU_DO_69(MACRO, __VA_ARGS__)


#define MU_DO_71(MACRO, ...) \
MACRO(71, __VA_ARGS__) \
MU_DO_70(MACRO, __VA_ARGS__)


#define MU_DO_72(MACRO, ...) \
MACRO(72, __VA_ARGS__) \
MU_DO_71(MACRO, __VA_ARGS__)


#define MU_DO_73(MACRO, ...) \
MACRO(73, __VA_ARGS__) \
MU_DO_72(MACRO, __VA_ARGS__)


#define MU_DO_74(MACRO, ...) \
MACRO(74, __VA_ARGS__) \
MU_DO_73(MACRO, __VA_ARGS__)


#define MU_DO_75(MACRO, ...) \
MACRO(75, __VA_ARGS__) \
MU_DO_74(MACRO, __VA_ARGS__)


#define MU_DO_76(MACRO, ...) \
MACRO(76, __VA_ARGS__) \
MU_DO_75(MACRO, __VA_ARGS__)


#define MU_DO_77(MACRO, ...) \
MACRO(77, __VA_ARGS__) \
MU_DO_76(MACRO, __VA_ARGS__)


#define MU_DO_78(MACRO, ...) \
MACRO(78, __VA_ARGS__) \
MU_DO_77(MACRO, __VA_ARGS__)


#define MU_DO_79(MACRO, ...) \
MACRO(79, __VA_ARGS__) \
MU_DO_78(MACRO, __VA_ARGS__)


#define MU_DO_80(MACRO, ...) \
MACRO(80, __VA_ARGS__) \
MU_DO_79(MACRO, __VA_ARGS__)


#define MU_DO_81(MACRO, ...) \
MACRO(81, __VA_ARGS__) \
MU_DO_80(MACRO, __VA_ARGS__)


#define MU_DO_82(MACRO, ...) \
MACRO(82, __VA_ARGS__) \
MU_DO_81(MACRO, __VA_ARGS__)


#define MU_DO_83(MACRO, ...) \
MACRO(83, __VA_ARGS__) \
MU_DO_82(MACRO, __VA_ARGS__)


#define MU_DO_84(MACRO, ...) \
MACRO(84, __VA_ARGS__) \
MU_DO_83(MACRO, __VA_ARGS__)


#define MU_DO_85(MACRO, ...) \
MACRO(85, __VA_ARGS__) \
MU_DO_84(MACRO, __VA_ARGS__)


#define MU_DO_86(MACRO, ...) \
MACRO(86, __VA_ARGS__) \
MU_DO_85(MACRO, __VA_ARGS__)


#define MU_DO_87(MACRO, ...) \
MACRO(87, __VA_ARGS__) \
MU_DO_86(MACRO, __VA_ARGS__)


#define MU_DO_88(MACRO, ...) \
MACRO(88, __VA_ARGS__) \
MU_DO_87(MACRO, __VA_ARGS__)


#define MU_DO_89(MACRO, ...) \
MACRO(89, __VA_ARGS__) \
MU_DO_88(MACRO, __VA_ARGS__)


#define MU_DO_90(MACRO, ...) \
MACRO(90, __VA_ARGS__) \
MU_DO_89(MACRO, __VA_ARGS__)


#define MU_DO_91(MACRO, ...) \
MACRO(91, __VA_ARGS__) \
MU_DO_90(MACRO, __VA_ARGS__)


#define MU_DO_92(MACRO, ...) \
MACRO(92, __VA_ARGS__) \
MU_DO_91(MACRO, __VA_ARGS__)


#define MU_DO_93(MACRO, ...) \
MACRO(93, __VA_ARGS__) \
MU_DO_92(MACRO, __VA_ARGS__)


#define MU_DO_94(MACRO, ...) \
MACRO(94, __VA_ARGS__) \
MU_DO_93(MACRO, __VA_ARGS__)


#define MU_DO_95(MACRO, ...) \
MACRO(95, __VA_ARGS__) \
MU_DO_94(MACRO, __VA_ARGS__)


#define MU_DO_96(MACRO, ...) \
MACRO(96, __VA_ARGS__) \
MU_DO_95(MACRO, __VA_ARGS__)


#define MU_DO_97(MACRO, ...) \
MACRO(97, __VA_ARGS__) \
MU_DO_96(MACRO, __VA_ARGS__)


#define MU_DO_98(MACRO, ...) \
MACRO(98, __VA_ARGS__) \
MU_DO_97(MACRO, __VA_ARGS__)


#define MU_DO_99(MACRO, ...) \
MACRO(99, __VA_ARGS__) \
MU_DO_98(MACRO, __VA_ARGS__)


#define MU_DO_100(MACRO, ...) \
MACRO(100, __VA_ARGS__) \
MU_DO_99(MACRO, __VA_ARGS__)


#define MU_DO_101(MACRO, ...) \
MACRO(101, __VA_ARGS__) \
MU_DO_100(MACRO, __VA_ARGS__)


#define MU_DO_102(MACRO, ...) \
MACRO(102, __VA_ARGS__) \
MU_DO_101(MACRO, __VA_ARGS__)


#define MU_DO_103(MACRO, ...) \
MACRO(103, __VA_ARGS__) \
MU_DO_102(MACRO, __VA_ARGS__)


#define MU_DO_104(MACRO, ...) \
MACRO(104, __VA_ARGS__) \
MU_DO_103(MACRO, __VA_ARGS__)


#define MU_DO_105(MACRO, ...) \
MACRO(105, __VA_ARGS__) \
MU_DO_104(MACRO, __VA_ARGS__)


#define MU_DO_106(MACRO, ...) \
MACRO(106, __VA_ARGS__) \
MU_DO_105(MACRO, __VA_ARGS__)


#define MU_DO_107(MACRO, ...) \
MACRO(107, __VA_ARGS__) \
MU_DO_106(MACRO, __VA_ARGS__)


#define MU_DO_108(MACRO, ...) \
MACRO(108, __VA_ARGS__) \
MU_DO_107(MACRO, __VA_ARGS__)


#define MU_DO_109(MACRO, ...) \
MACRO(109, __VA_ARGS__) \
MU_DO_108(MACRO, __VA_ARGS__)


#define MU_DO_110(MACRO, ...) \
MACRO(110, __VA_ARGS__) \
MU_DO_109(MACRO, __VA_ARGS__)


#define MU_DO_111(MACRO, ...) \
MACRO(111, __VA_ARGS__) \
MU_DO_110(MACRO, __VA_ARGS__)


#define MU_DO_112(MACRO, ...) \
MACRO(112, __VA_ARGS__) \
MU_DO_111(MACRO, __VA_ARGS__)


#define MU_DO_113(MACRO, ...) \
MACRO(113, __VA_ARGS__) \
MU_DO_112(MACRO, __VA_ARGS__)


#define MU_DO_114(MACRO, ...) \
MACRO(114, __VA_ARGS__) \
MU_DO_113(MACRO, __VA_ARGS__)


#define MU_DO_115(MACRO, ...) \
MACRO(115, __VA_ARGS__) \
MU_DO_114(MACRO, __VA_ARGS__)


#define MU_DO_116(MACRO, ...) \
MACRO(116, __VA_ARGS__) \
MU_DO_115(MACRO, __VA_ARGS__)


#define MU_DO_117(MACRO, ...) \
MACRO(117, __VA_ARGS__) \
MU_DO_116(MACRO, __VA_ARGS__)


#define MU_DO_118(MACRO, ...) \
MACRO(118, __VA_ARGS__) \
MU_DO_117(MACRO, __VA_ARGS__)


#define MU_DO_119(MACRO, ...) \
MACRO(119, __VA_ARGS__) \
MU_DO_118(MACRO, __VA_ARGS__)


#define MU_DO_120(MACRO, ...) \
MACRO(120, __VA_ARGS__) \
MU_DO_119(MACRO, __VA_ARGS__)


#define MU_DO_121(MACRO, ...) \
MACRO(121, __VA_ARGS__) \
MU_DO_120(MACRO, __VA_ARGS__)


#define MU_DO_122(MACRO, ...) \
MACRO(122, __VA_ARGS__) \
MU_DO_121(MACRO, __VA_ARGS__)


#define MU_DO_123(MACRO, ...) \
MACRO(123, __VA_ARGS__) \
MU_DO_122(MACRO, __VA_ARGS__)


#define MU_DO_124(MACRO, ...) \
MACRO(124, __VA_ARGS__) \
MU_DO_123(MACRO, __VA_ARGS__)


#define MU_DO_125(MACRO, ...) \
MACRO(125, __VA_ARGS__) \
MU_DO_124(MACRO, __VA_ARGS__)


#define MU_DO_126(MACRO, ...) \
MACRO(126, __VA_ARGS__) \
MU_DO_125(MACRO, __VA_ARGS__)


#define MU_DO_127(MACRO, ...) \
MACRO(127, __VA_ARGS__) \
MU_DO_126(MACRO, __VA_ARGS__)


#define MU_DO_128(MACRO, ...) \
MACRO(128, __VA_ARGS__) \
MU_DO_127(MACRO, __VA_ARGS__)


#define MU_DO_129(MACRO, ...) \
MACRO(129, __VA_ARGS__) \
MU_DO_128(MACRO, __VA_ARGS__)


#define MU_DO_130(MACRO, ...) \
MACRO(130, __VA_ARGS__) \
MU_DO_129(MACRO, __VA_ARGS__)


#define MU_DO_131(MACRO, ...) \
MACRO(131, __VA_ARGS__) \
MU_DO_130(MACRO, __VA_ARGS__)


#define MU_DO_132(MACRO, ...) \
MACRO(132, __VA_ARGS__) \
MU_DO_131(MACRO, __VA_ARGS__)


#define MU_DO_133(MACRO, ...) \
MACRO(133, __VA_ARGS__) \
MU_DO_132(MACRO, __VA_ARGS__)


#define MU_DO_134(MACRO, ...) \
MACRO(134, __VA_ARGS__) \
MU_DO_133(MACRO, __VA_ARGS__)


#define MU_DO_135(MACRO, ...) \
MACRO(135, __VA_ARGS__) \
MU_DO_134(MACRO, __VA_ARGS__)


#define MU_DO_136(MACRO, ...) \
MACRO(136, __VA_ARGS__) \
MU_DO_135(MACRO, __VA_ARGS__)


#define MU_DO_137(MACRO, ...) \
MACRO(137, __VA_ARGS__) \
MU_DO_136(MACRO, __VA_ARGS__)


#define MU_DO_138(MACRO, ...) \
MACRO(138, __VA_ARGS__) \
MU_DO_137(MACRO, __VA_ARGS__)


#define MU_DO_139(MACRO, ...) \
MACRO(139, __VA_ARGS__) \
MU_DO_138(MACRO, __VA_ARGS__)


#define MU_DO_140(MACRO, ...) \
MACRO(140, __VA_ARGS__) \
MU_DO_139(MACRO, __VA_ARGS__)


#define MU_DO_141(MACRO, ...) \
MACRO(141, __VA_ARGS__) \
MU_DO_140(MACRO, __VA_ARGS__)


#define MU_DO_142(MACRO, ...) \
MACRO(142, __VA_ARGS__) \
MU_DO_141(MACRO, __VA_ARGS__)


#define MU_DO_143(MACRO, ...) \
MACRO(143, __VA_ARGS__) \
MU_DO_142(MACRO, __VA_ARGS__)


#define MU_DO_144(MACRO, ...) \
MACRO(144, __VA_ARGS__) \
MU_DO_143(MACRO, __VA_ARGS__)


#define MU_DO_145(MACRO, ...) \
MACRO(145, __VA_ARGS__) \
MU_DO_144(MACRO, __VA_ARGS__)


#define MU_DO_146(MACRO, ...) \
MACRO(146, __VA_ARGS__) \
MU_DO_145(MACRO, __VA_ARGS__)


#define MU_DO_147(MACRO, ...) \
MACRO(147, __VA_ARGS__) \
MU_DO_146(MACRO, __VA_ARGS__)


#define MU_DO_148(MACRO, ...) \
MACRO(148, __VA_ARGS__) \
MU_DO_147(MACRO, __VA_ARGS__)


#define MU_DO_149(MACRO, ...) \
MACRO(149, __VA_ARGS__) \
MU_DO_148(MACRO, __VA_ARGS__)


#define MU_DO_150(MACRO, ...) \
MACRO(150, __VA_ARGS__) \
MU_DO_149(MACRO, __VA_ARGS__)


#define MU_DO_151(MACRO, ...) \
MACRO(151, __VA_ARGS__) \
MU_DO_150(MACRO, __VA_ARGS__)


#define MU_DO_152(MACRO, ...) \
MACRO(152, __VA_ARGS__) \
MU_DO_151(MACRO, __VA_ARGS__)


#define MU_DO_153(MACRO, ...) \
MACRO(153, __VA_ARGS__) \
MU_DO_152(MACRO, __VA_ARGS__)


#define MU_DO_154(MACRO, ...) \
MACRO(154, __VA_ARGS__) \
MU_DO_153(MACRO, __VA_ARGS__)


#define MU_DO_155(MACRO, ...) \
MACRO(155, __VA_ARGS__) \
MU_DO_154(MACRO, __VA_ARGS__)


#define MU_DO_156(MACRO, ...) \
MACRO(156, __VA_ARGS__) \
MU_DO_155(MACRO, __VA_ARGS__)


#define MU_DO_157(MACRO, ...) \
MACRO(157, __VA_ARGS__) \
MU_DO_156(MACRO, __VA_ARGS__)


#define MU_DO_158(MACRO, ...) \
MACRO(158, __VA_ARGS__) \
MU_DO_157(MACRO, __VA_ARGS__)


#define MU_DO_159(MACRO, ...) \
MACRO(159, __VA_ARGS__) \
MU_DO_158(MACRO, __VA_ARGS__)


#define MU_DO_160(MACRO, ...) \
MACRO(160, __VA_ARGS__) \
MU_DO_159(MACRO, __VA_ARGS__)


#define MU_DO_161(MACRO, ...) \
MACRO(161, __VA_ARGS__) \
MU_DO_160(MACRO, __VA_ARGS__)


#define MU_DO_162(MACRO, ...) \
MACRO(162, __VA_ARGS__) \
MU_DO_161(MACRO, __VA_ARGS__)


#define MU_DO_163(MACRO, ...) \
MACRO(163, __VA_ARGS__) \
MU_DO_162(MACRO, __VA_ARGS__)


#define MU_DO_164(MACRO, ...) \
MACRO(164, __VA_ARGS__) \
MU_DO_163(MACRO, __VA_ARGS__)


#define MU_DO_165(MACRO, ...) \
MACRO(165, __VA_ARGS__) \
MU_DO_164(MACRO, __VA_ARGS__)


#define MU_DO_166(MACRO, ...) \
MACRO(166, __VA_ARGS__) \
MU_DO_165(MACRO, __VA_ARGS__)


#define MU_DO_167(MACRO, ...) \
MACRO(167, __VA_ARGS__) \
MU_DO_166(MACRO, __VA_ARGS__)


#define MU_DO_168(MACRO, ...) \
MACRO(168, __VA_ARGS__) \
MU_DO_167(MACRO, __VA_ARGS__)


#define MU_DO_169(MACRO, ...) \
MACRO(169, __VA_ARGS__) \
MU_DO_168(MACRO, __VA_ARGS__)


#define MU_DO_170(MACRO, ...) \
MACRO(170, __VA_ARGS__) \
MU_DO_169(MACRO, __VA_ARGS__)


#define MU_DO_171(MACRO, ...) \
MACRO(171, __VA_ARGS__) \
MU_DO_170(MACRO, __VA_ARGS__)


#define MU_DO_172(MACRO, ...) \
MACRO(172, __VA_ARGS__) \
MU_DO_171(MACRO, __VA_ARGS__)


#define MU_DO_173(MACRO, ...) \
MACRO(173, __VA_ARGS__) \
MU_DO_172(MACRO, __VA_ARGS__)


#define MU_DO_174(MACRO, ...) \
MACRO(174, __VA_ARGS__) \
MU_DO_173(MACRO, __VA_ARGS__)


#define MU_DO_175(MACRO, ...) \
MACRO(175, __VA_ARGS__) \
MU_DO_174(MACRO, __VA_ARGS__)


#define MU_DO_176(MACRO, ...) \
MACRO(176, __VA_ARGS__) \
MU_DO_175(MACRO, __VA_ARGS__)


#define MU_DO_177(MACRO, ...) \
MACRO(177, __VA_ARGS__) \
MU_DO_176(MACRO, __VA_ARGS__)


#define MU_DO_178(MACRO, ...) \
MACRO(178, __VA_ARGS__) \
MU_DO_177(MACRO, __VA_ARGS__)


#define MU_DO_179(MACRO, ...) \
MACRO(179, __VA_ARGS__) \
MU_DO_178(MACRO, __VA_ARGS__)


#define MU_DO_180(MACRO, ...) \
MACRO(180, __VA_ARGS__) \
MU_DO_179(MACRO, __VA_ARGS__)


#define MU_DO_181(MACRO, ...) \
MACRO(181, __VA_ARGS__) \
MU_DO_180(MACRO, __VA_ARGS__)


#define MU_DO_182(MACRO, ...) \
MACRO(182, __VA_ARGS__) \
MU_DO_181(MACRO, __VA_ARGS__)


#define MU_DO_183(MACRO, ...) \
MACRO(183, __VA_ARGS__) \
MU_DO_182(MACRO, __VA_ARGS__)


#define MU_DO_184(MACRO, ...) \
MACRO(184, __VA_ARGS__) \
MU_DO_183(MACRO, __VA_ARGS__)


#define MU_DO_185(MACRO, ...) \
MACRO(185, __VA_ARGS__) \
MU_DO_184(MACRO, __VA_ARGS__)


#define MU_DO_186(MACRO, ...) \
MACRO(186, __VA_ARGS__) \
MU_DO_185(MACRO, __VA_ARGS__)


#define MU_DO_187(MACRO, ...) \
MACRO(187, __VA_ARGS__) \
MU_DO_186(MACRO, __VA_ARGS__)


#define MU_DO_188(MACRO, ...) \
MACRO(188, __VA_ARGS__) \
MU_DO_187(MACRO, __VA_ARGS__)


#define MU_DO_189(MACRO, ...) \
MACRO(189, __VA_ARGS__) \
MU_DO_188(MACRO, __VA_ARGS__)


#define MU_DO_190(MACRO, ...) \
MACRO(190, __VA_ARGS__) \
MU_DO_189(MACRO, __VA_ARGS__)


#define MU_DO_191(MACRO, ...) \
MACRO(191, __VA_ARGS__) \
MU_DO_190(MACRO, __VA_ARGS__)


#define MU_DO_192(MACRO, ...) \
MACRO(192, __VA_ARGS__) \
MU_DO_191(MACRO, __VA_ARGS__)


#define MU_DO_193(MACRO, ...) \
MACRO(193, __VA_ARGS__) \
MU_DO_192(MACRO, __VA_ARGS__)


#define MU_DO_194(MACRO, ...) \
MACRO(194, __VA_ARGS__) \
MU_DO_193(MACRO, __VA_ARGS__)


#define MU_DO_195(MACRO, ...) \
MACRO(195, __VA_ARGS__) \
MU_DO_194(MACRO, __VA_ARGS__)


#define MU_DO_196(MACRO, ...) \
MACRO(196, __VA_ARGS__) \
MU_DO_195(MACRO, __VA_ARGS__)


#define MU_DO_197(MACRO, ...) \
MACRO(197, __VA_ARGS__) \
MU_DO_196(MACRO, __VA_ARGS__)


#define MU_DO_198(MACRO, ...) \
MACRO(198, __VA_ARGS__) \
MU_DO_197(MACRO, __VA_ARGS__)


#define MU_DO_199(MACRO, ...) \
MACRO(199, __VA_ARGS__) \
MU_DO_198(MACRO, __VA_ARGS__)


#define MU_DO_200(MACRO, ...) \
MACRO(200, __VA_ARGS__) \
MU_DO_199(MACRO, __VA_ARGS__)


#define MU_DO_201(MACRO, ...) \
MACRO(201, __VA_ARGS__) \
MU_DO_200(MACRO, __VA_ARGS__)


#define MU_DO_202(MACRO, ...) \
MACRO(202, __VA_ARGS__) \
MU_DO_201(MACRO, __VA_ARGS__)


#define MU_DO_203(MACRO, ...) \
MACRO(203, __VA_ARGS__) \
MU_DO_202(MACRO, __VA_ARGS__)


#define MU_DO_204(MACRO, ...) \
MACRO(204, __VA_ARGS__) \
MU_DO_203(MACRO, __VA_ARGS__)


#define MU_DO_205(MACRO, ...) \
MACRO(205, __VA_ARGS__) \
MU_DO_204(MACRO, __VA_ARGS__)


#define MU_DO_206(MACRO, ...) \
MACRO(206, __VA_ARGS__) \
MU_DO_205(MACRO, __VA_ARGS__)


#define MU_DO_207(MACRO, ...) \
MACRO(207, __VA_ARGS__) \
MU_DO_206(MACRO, __VA_ARGS__)


#define MU_DO_208(MACRO, ...) \
MACRO(208, __VA_ARGS__) \
MU_DO_207(MACRO, __VA_ARGS__)


#define MU_DO_209(MACRO, ...) \
MACRO(209, __VA_ARGS__) \
MU_DO_208(MACRO, __VA_ARGS__)


#define MU_DO_210(MACRO, ...) \
MACRO(210, __VA_ARGS__) \
MU_DO_209(MACRO, __VA_ARGS__)


#define MU_DO_211(MACRO, ...) \
MACRO(211, __VA_ARGS__) \
MU_DO_210(MACRO, __VA_ARGS__)


#define MU_DO_212(MACRO, ...) \
MACRO(212, __VA_ARGS__) \
MU_DO_211(MACRO, __VA_ARGS__)


#define MU_DO_213(MACRO, ...) \
MACRO(213, __VA_ARGS__) \
MU_DO_212(MACRO, __VA_ARGS__)


#define MU_DO_214(MACRO, ...) \
MACRO(214, __VA_ARGS__) \
MU_DO_213(MACRO, __VA_ARGS__)


#define MU_DO_215(MACRO, ...) \
MACRO(215, __VA_ARGS__) \
MU_DO_214(MACRO, __VA_ARGS__)


#define MU_DO_216(MACRO, ...) \
MACRO(216, __VA_ARGS__) \
MU_DO_215(MACRO, __VA_ARGS__)


#define MU_DO_217(MACRO, ...) \
MACRO(217, __VA_ARGS__) \
MU_DO_216(MACRO, __VA_ARGS__)


#define MU_DO_218(MACRO, ...) \
MACRO(218, __VA_ARGS__) \
MU_DO_217(MACRO, __VA_ARGS__)


#define MU_DO_219(MACRO, ...) \
MACRO(219, __VA_ARGS__) \
MU_DO_218(MACRO, __VA_ARGS__)


#define MU_DO_220(MACRO, ...) \
MACRO(220, __VA_ARGS__) \
MU_DO_219(MACRO, __VA_ARGS__)


#define MU_DO_221(MACRO, ...) \
MACRO(221, __VA_ARGS__) \
MU_DO_220(MACRO, __VA_ARGS__)


#define MU_DO_222(MACRO, ...) \
MACRO(222, __VA_ARGS__) \
MU_DO_221(MACRO, __VA_ARGS__)


#define MU_DO_223(MACRO, ...) \
MACRO(223, __VA_ARGS__) \
MU_DO_222(MACRO, __VA_ARGS__)


#define MU_DO_224(MACRO, ...) \
MACRO(224, __VA_ARGS__) \
MU_DO_223(MACRO, __VA_ARGS__)


#define MU_DO_225(MACRO, ...) \
MACRO(225, __VA_ARGS__) \
MU_DO_224(MACRO, __VA_ARGS__)


#define MU_DO_226(MACRO, ...) \
MACRO(226, __VA_ARGS__) \
MU_DO_225(MACRO, __VA_ARGS__)


#define MU_DO_227(MACRO, ...) \
MACRO(227, __VA_ARGS__) \
MU_DO_226(MACRO, __VA_ARGS__)


#define MU_DO_228(MACRO, ...) \
MACRO(228, __VA_ARGS__) \
MU_DO_227(MACRO, __VA_ARGS__)


#define MU_DO_229(MACRO, ...) \
MACRO(229, __VA_ARGS__) \
MU_DO_228(MACRO, __VA_ARGS__)


#define MU_DO_230(MACRO, ...) \
MACRO(230, __VA_ARGS__) \
MU_DO_229(MACRO, __VA_ARGS__)


#define MU_DO_231(MACRO, ...) \
MACRO(231, __VA_ARGS__) \
MU_DO_230(MACRO, __VA_ARGS__)


#define MU_DO_232(MACRO, ...) \
MACRO(232, __VA_ARGS__) \
MU_DO_231(MACRO, __VA_ARGS__)


#define MU_DO_233(MACRO, ...) \
MACRO(233, __VA_ARGS__) \
MU_DO_232(MACRO, __VA_ARGS__)


#define MU_DO_234(MACRO, ...) \
MACRO(234, __VA_ARGS__) \
MU_DO_233(MACRO, __VA_ARGS__)


#define MU_DO_235(MACRO, ...) \
MACRO(235, __VA_ARGS__) \
MU_DO_234(MACRO, __VA_ARGS__)


#define MU_DO_236(MACRO, ...) \
MACRO(236, __VA_ARGS__) \
MU_DO_235(MACRO, __VA_ARGS__)


#define MU_DO_237(MACRO, ...) \
MACRO(237, __VA_ARGS__) \
MU_DO_236(MACRO, __VA_ARGS__)


#define MU_DO_238(MACRO, ...) \
MACRO(238, __VA_ARGS__) \
MU_DO_237(MACRO, __VA_ARGS__)


#define MU_DO_239(MACRO, ...) \
MACRO(239, __VA_ARGS__) \
MU_DO_238(MACRO, __VA_ARGS__)


#define MU_DO_240(MACRO, ...) \
MACRO(240, __VA_ARGS__) \
MU_DO_239(MACRO, __VA_ARGS__)


#define MU_DO_241(MACRO, ...) \
MACRO(241, __VA_ARGS__) \
MU_DO_240(MACRO, __VA_ARGS__)


#define MU_DO_242(MACRO, ...) \
MACRO(242, __VA_ARGS__) \
MU_DO_241(MACRO, __VA_ARGS__)


#define MU_DO_243(MACRO, ...) \
MACRO(243, __VA_ARGS__) \
MU_DO_242(MACRO, __VA_ARGS__)


#define MU_DO_244(MACRO, ...) \
MACRO(244, __VA_ARGS__) \
MU_DO_243(MACRO, __VA_ARGS__)


#define MU_DO_245(MACRO, ...) \
MACRO(245, __VA_ARGS__) \
MU_DO_244(MACRO, __VA_ARGS__)


#define MU_DO_246(MACRO, ...) \
MACRO(246, __VA_ARGS__) \
MU_DO_245(MACRO, __VA_ARGS__)


#define MU_DO_247(MACRO, ...) \
MACRO(247, __VA_ARGS__) \
MU_DO_246(MACRO, __VA_ARGS__)


#define MU_DO_248(MACRO, ...) \
MACRO(248, __VA_ARGS__) \
MU_DO_247(MACRO, __VA_ARGS__)


#define MU_DO_249(MACRO, ...) \
MACRO(249, __VA_ARGS__) \
MU_DO_248(MACRO, __VA_ARGS__)


#define MU_DO_250(MACRO, ...) \
MACRO(250, __VA_ARGS__) \
MU_DO_249(MACRO, __VA_ARGS__)


#define MU_DO_251(MACRO, ...) \
MACRO(251, __VA_ARGS__) \
MU_DO_250(MACRO, __VA_ARGS__)


#define MU_DO_252(MACRO, ...) \
MACRO(252, __VA_ARGS__) \
MU_DO_251(MACRO, __VA_ARGS__)


#define MU_DO_253(MACRO, ...) \
MACRO(253, __VA_ARGS__) \
MU_DO_252(MACRO, __VA_ARGS__)


#define MU_DO_254(MACRO, ...) \
MACRO(254, __VA_ARGS__) \
MU_DO_253(MACRO, __VA_ARGS__)


#define MU_DO_255(MACRO, ...) \
MACRO(255, __VA_ARGS__) \
MU_DO_254(MACRO, __VA_ARGS__)


#define MU_DO_256(MACRO, ...) \
MACRO(256, __VA_ARGS__) \
MU_DO_255(MACRO, __VA_ARGS__)


#define MU_DO_257(MACRO, ...) \
MACRO(257, __VA_ARGS__) \
MU_DO_256(MACRO, __VA_ARGS__)


#define MU_DO_258(MACRO, ...) \
MACRO(258, __VA_ARGS__) \
MU_DO_257(MACRO, __VA_ARGS__)


#define MU_DO_259(MACRO, ...) \
MACRO(259, __VA_ARGS__) \
MU_DO_258(MACRO, __VA_ARGS__)


#define MU_DO_260(MACRO, ...) \
MACRO(260, __VA_ARGS__) \
MU_DO_259(MACRO, __VA_ARGS__)


#define MU_DO_261(MACRO, ...) \
MACRO(261, __VA_ARGS__) \
MU_DO_260(MACRO, __VA_ARGS__)


#define MU_DO_262(MACRO, ...) \
MACRO(262, __VA_ARGS__) \
MU_DO_261(MACRO, __VA_ARGS__)


#define MU_DO_263(MACRO, ...) \
MACRO(263, __VA_ARGS__) \
MU_DO_262(MACRO, __VA_ARGS__)


#define MU_DO_264(MACRO, ...) \
MACRO(264, __VA_ARGS__) \
MU_DO_263(MACRO, __VA_ARGS__)


#define MU_DO_265(MACRO, ...) \
MACRO(265, __VA_ARGS__) \
MU_DO_264(MACRO, __VA_ARGS__)


#define MU_DO_266(MACRO, ...) \
MACRO(266, __VA_ARGS__) \
MU_DO_265(MACRO, __VA_ARGS__)


#define MU_DO_267(MACRO, ...) \
MACRO(267, __VA_ARGS__) \
MU_DO_266(MACRO, __VA_ARGS__)


#define MU_DO_268(MACRO, ...) \
MACRO(268, __VA_ARGS__) \
MU_DO_267(MACRO, __VA_ARGS__)


#define MU_DO_269(MACRO, ...) \
MACRO(269, __VA_ARGS__) \
MU_DO_268(MACRO, __VA_ARGS__)


#define MU_DO_270(MACRO, ...) \
MACRO(270, __VA_ARGS__) \
MU_DO_269(MACRO, __VA_ARGS__)


#define MU_DO_271(MACRO, ...) \
MACRO(271, __VA_ARGS__) \
MU_DO_270(MACRO, __VA_ARGS__)


#define MU_DO_272(MACRO, ...) \
MACRO(272, __VA_ARGS__) \
MU_DO_271(MACRO, __VA_ARGS__)


#define MU_DO_273(MACRO, ...) \
MACRO(273, __VA_ARGS__) \
MU_DO_272(MACRO, __VA_ARGS__)


#define MU_DO_274(MACRO, ...) \
MACRO(274, __VA_ARGS__) \
MU_DO_273(MACRO, __VA_ARGS__)


#define MU_DO_275(MACRO, ...) \
MACRO(275, __VA_ARGS__) \
MU_DO_274(MACRO, __VA_ARGS__)


#define MU_DO_276(MACRO, ...) \
MACRO(276, __VA_ARGS__) \
MU_DO_275(MACRO, __VA_ARGS__)


#define MU_DO_277(MACRO, ...) \
MACRO(277, __VA_ARGS__) \
MU_DO_276(MACRO, __VA_ARGS__)


#define MU_DO_278(MACRO, ...) \
MACRO(278, __VA_ARGS__) \
MU_DO_277(MACRO, __VA_ARGS__)


#define MU_DO_279(MACRO, ...) \
MACRO(279, __VA_ARGS__) \
MU_DO_278(MACRO, __VA_ARGS__)


#define MU_DO_280(MACRO, ...) \
MACRO(280, __VA_ARGS__) \
MU_DO_279(MACRO, __VA_ARGS__)


#define MU_DO_281(MACRO, ...) \
MACRO(281, __VA_ARGS__) \
MU_DO_280(MACRO, __VA_ARGS__)


#define MU_DO_282(MACRO, ...) \
MACRO(282, __VA_ARGS__) \
MU_DO_281(MACRO, __VA_ARGS__)


#define MU_DO_283(MACRO, ...) \
MACRO(283, __VA_ARGS__) \
MU_DO_282(MACRO, __VA_ARGS__)


#define MU_DO_284(MACRO, ...) \
MACRO(284, __VA_ARGS__) \
MU_DO_283(MACRO, __VA_ARGS__)


#define MU_DO_285(MACRO, ...) \
MACRO(285, __VA_ARGS__) \
MU_DO_284(MACRO, __VA_ARGS__)


#define MU_DO_286(MACRO, ...) \
MACRO(286, __VA_ARGS__) \
MU_DO_285(MACRO, __VA_ARGS__)


#define MU_DO_287(MACRO, ...) \
MACRO(287, __VA_ARGS__) \
MU_DO_286(MACRO, __VA_ARGS__)


#define MU_DO_288(MACRO, ...) \
MACRO(288, __VA_ARGS__) \
MU_DO_287(MACRO, __VA_ARGS__)


#define MU_DO_289(MACRO, ...) \
MACRO(289, __VA_ARGS__) \
MU_DO_288(MACRO, __VA_ARGS__)


#define MU_DO_290(MACRO, ...) \
MACRO(290, __VA_ARGS__) \
MU_DO_289(MACRO, __VA_ARGS__)


#define MU_DO_291(MACRO, ...) \
MACRO(291, __VA_ARGS__) \
MU_DO_290(MACRO, __VA_ARGS__)


#define MU_DO_292(MACRO, ...) \
MACRO(292, __VA_ARGS__) \
MU_DO_291(MACRO, __VA_ARGS__)


#define MU_DO_293(MACRO, ...) \
MACRO(293, __VA_ARGS__) \
MU_DO_292(MACRO, __VA_ARGS__)


#define MU_DO_294(MACRO, ...) \
MACRO(294, __VA_ARGS__) \
MU_DO_293(MACRO, __VA_ARGS__)


#define MU_DO_295(MACRO, ...) \
MACRO(295, __VA_ARGS__) \
MU_DO_294(MACRO, __VA_ARGS__)


#define MU_DO_296(MACRO, ...) \
MACRO(296, __VA_ARGS__) \
MU_DO_295(MACRO, __VA_ARGS__)


#define MU_DO_297(MACRO, ...) \
MACRO(297, __VA_ARGS__) \
MU_DO_296(MACRO, __VA_ARGS__)


#define MU_DO_298(MACRO, ...) \
MACRO(298, __VA_ARGS__) \
MU_DO_297(MACRO, __VA_ARGS__)


#define MU_DO_299(MACRO, ...) \
MACRO(299, __VA_ARGS__) \
MU_DO_298(MACRO, __VA_ARGS__)


#define MU_DO_300(MACRO, ...) \
MACRO(300, __VA_ARGS__) \
MU_DO_299(MACRO, __VA_ARGS__)


#define MU_DO_301(MACRO, ...) \
MACRO(301, __VA_ARGS__) \
MU_DO_300(MACRO, __VA_ARGS__)


#define MU_DO_302(MACRO, ...) \
MACRO(302, __VA_ARGS__) \
MU_DO_301(MACRO, __VA_ARGS__)


#define MU_DO_303(MACRO, ...) \
MACRO(303, __VA_ARGS__) \
MU_DO_302(MACRO, __VA_ARGS__)


#define MU_DO_304(MACRO, ...) \
MACRO(304, __VA_ARGS__) \
MU_DO_303(MACRO, __VA_ARGS__)


#define MU_DO_305(MACRO, ...) \
MACRO(305, __VA_ARGS__) \
MU_DO_304(MACRO, __VA_ARGS__)


#define MU_DO_306(MACRO, ...) \
MACRO(306, __VA_ARGS__) \
MU_DO_305(MACRO, __VA_ARGS__)


#define MU_DO_307(MACRO, ...) \
MACRO(307, __VA_ARGS__) \
MU_DO_306(MACRO, __VA_ARGS__)


#define MU_DO_308(MACRO, ...) \
MACRO(308, __VA_ARGS__) \
MU_DO_307(MACRO, __VA_ARGS__)


#define MU_DO_309(MACRO, ...) \
MACRO(309, __VA_ARGS__) \
MU_DO_308(MACRO, __VA_ARGS__)


#define MU_DO_310(MACRO, ...) \
MACRO(310, __VA_ARGS__) \
MU_DO_309(MACRO, __VA_ARGS__)


#define MU_DO_311(MACRO, ...) \
MACRO(311, __VA_ARGS__) \
MU_DO_310(MACRO, __VA_ARGS__)


#define MU_DO_312(MACRO, ...) \
MACRO(312, __VA_ARGS__) \
MU_DO_311(MACRO, __VA_ARGS__)


#define MU_DO_313(MACRO, ...) \
MACRO(313, __VA_ARGS__) \
MU_DO_312(MACRO, __VA_ARGS__)


#define MU_DO_314(MACRO, ...) \
MACRO(314, __VA_ARGS__) \
MU_DO_313(MACRO, __VA_ARGS__)


#define MU_DO_315(MACRO, ...) \
MACRO(315, __VA_ARGS__) \
MU_DO_314(MACRO, __VA_ARGS__)


#define MU_DO_316(MACRO, ...) \
MACRO(316, __VA_ARGS__) \
MU_DO_315(MACRO, __VA_ARGS__)


#define MU_DO_317(MACRO, ...) \
MACRO(317, __VA_ARGS__) \
MU_DO_316(MACRO, __VA_ARGS__)


#define MU_DO_318(MACRO, ...) \
MACRO(318, __VA_ARGS__) \
MU_DO_317(MACRO, __VA_ARGS__)


#define MU_DO_319(MACRO, ...) \
MACRO(319, __VA_ARGS__) \
MU_DO_318(MACRO, __VA_ARGS__)


#define MU_DO_320(MACRO, ...) \
MACRO(320, __VA_ARGS__) \
MU_DO_319(MACRO, __VA_ARGS__)


#define MU_DO_321(MACRO, ...) \
MACRO(321, __VA_ARGS__) \
MU_DO_320(MACRO, __VA_ARGS__)


#define MU_DO_322(MACRO, ...) \
MACRO(322, __VA_ARGS__) \
MU_DO_321(MACRO, __VA_ARGS__)


#define MU_DO_323(MACRO, ...) \
MACRO(323, __VA_ARGS__) \
MU_DO_322(MACRO, __VA_ARGS__)


#define MU_DO_324(MACRO, ...) \
MACRO(324, __VA_ARGS__) \
MU_DO_323(MACRO, __VA_ARGS__)


#define MU_DO_325(MACRO, ...) \
MACRO(325, __VA_ARGS__) \
MU_DO_324(MACRO, __VA_ARGS__)


#define MU_DO_326(MACRO, ...) \
MACRO(326, __VA_ARGS__) \
MU_DO_325(MACRO, __VA_ARGS__)


#define MU_DO_327(MACRO, ...) \
MACRO(327, __VA_ARGS__) \
MU_DO_326(MACRO, __VA_ARGS__)


#define MU_DO_328(MACRO, ...) \
MACRO(328, __VA_ARGS__) \
MU_DO_327(MACRO, __VA_ARGS__)


#define MU_DO_329(MACRO, ...) \
MACRO(329, __VA_ARGS__) \
MU_DO_328(MACRO, __VA_ARGS__)


#define MU_DO_330(MACRO, ...) \
MACRO(330, __VA_ARGS__) \
MU_DO_329(MACRO, __VA_ARGS__)


#define MU_DO_331(MACRO, ...) \
MACRO(331, __VA_ARGS__) \
MU_DO_330(MACRO, __VA_ARGS__)


#define MU_DO_332(MACRO, ...) \
MACRO(332, __VA_ARGS__) \
MU_DO_331(MACRO, __VA_ARGS__)


#define MU_DO_333(MACRO, ...) \
MACRO(333, __VA_ARGS__) \
MU_DO_332(MACRO, __VA_ARGS__)


#define MU_DO_334(MACRO, ...) \
MACRO(334, __VA_ARGS__) \
MU_DO_333(MACRO, __VA_ARGS__)


#define MU_DO_335(MACRO, ...) \
MACRO(335, __VA_ARGS__) \
MU_DO_334(MACRO, __VA_ARGS__)


#define MU_DO_336(MACRO, ...) \
MACRO(336, __VA_ARGS__) \
MU_DO_335(MACRO, __VA_ARGS__)


#define MU_DO_337(MACRO, ...) \
MACRO(337, __VA_ARGS__) \
MU_DO_336(MACRO, __VA_ARGS__)


#define MU_DO_338(MACRO, ...) \
MACRO(338, __VA_ARGS__) \
MU_DO_337(MACRO, __VA_ARGS__)


#define MU_DO_339(MACRO, ...) \
MACRO(339, __VA_ARGS__) \
MU_DO_338(MACRO, __VA_ARGS__)


#define MU_DO_340(MACRO, ...) \
MACRO(340, __VA_ARGS__) \
MU_DO_339(MACRO, __VA_ARGS__)


#define MU_DO_341(MACRO, ...) \
MACRO(341, __VA_ARGS__) \
MU_DO_340(MACRO, __VA_ARGS__)


#define MU_DO_342(MACRO, ...) \
MACRO(342, __VA_ARGS__) \
MU_DO_341(MACRO, __VA_ARGS__)


#define MU_DO_343(MACRO, ...) \
MACRO(343, __VA_ARGS__) \
MU_DO_342(MACRO, __VA_ARGS__)


#define MU_DO_344(MACRO, ...) \
MACRO(344, __VA_ARGS__) \
MU_DO_343(MACRO, __VA_ARGS__)


#define MU_DO_345(MACRO, ...) \
MACRO(345, __VA_ARGS__) \
MU_DO_344(MACRO, __VA_ARGS__)


#define MU_DO_346(MACRO, ...) \
MACRO(346, __VA_ARGS__) \
MU_DO_345(MACRO, __VA_ARGS__)


#define MU_DO_347(MACRO, ...) \
MACRO(347, __VA_ARGS__) \
MU_DO_346(MACRO, __VA_ARGS__)


#define MU_DO_348(MACRO, ...) \
MACRO(348, __VA_ARGS__) \
MU_DO_347(MACRO, __VA_ARGS__)


#define MU_DO_349(MACRO, ...) \
MACRO(349, __VA_ARGS__) \
MU_DO_348(MACRO, __VA_ARGS__)


#define MU_DO_350(MACRO, ...) \
MACRO(350, __VA_ARGS__) \
MU_DO_349(MACRO, __VA_ARGS__)


#define MU_DO_351(MACRO, ...) \
MACRO(351, __VA_ARGS__) \
MU_DO_350(MACRO, __VA_ARGS__)


#define MU_DO_352(MACRO, ...) \
MACRO(352, __VA_ARGS__) \
MU_DO_351(MACRO, __VA_ARGS__)


#define MU_DO_353(MACRO, ...) \
MACRO(353, __VA_ARGS__) \
MU_DO_352(MACRO, __VA_ARGS__)


#define MU_DO_354(MACRO, ...) \
MACRO(354, __VA_ARGS__) \
MU_DO_353(MACRO, __VA_ARGS__)


#define MU_DO_355(MACRO, ...) \
MACRO(355, __VA_ARGS__) \
MU_DO_354(MACRO, __VA_ARGS__)


#define MU_DO_356(MACRO, ...) \
MACRO(356, __VA_ARGS__) \
MU_DO_355(MACRO, __VA_ARGS__)


#define MU_DO_357(MACRO, ...) \
MACRO(357, __VA_ARGS__) \
MU_DO_356(MACRO, __VA_ARGS__)


#define MU_DO_358(MACRO, ...) \
MACRO(358, __VA_ARGS__) \
MU_DO_357(MACRO, __VA_ARGS__)


#define MU_DO_359(MACRO, ...) \
MACRO(359, __VA_ARGS__) \
MU_DO_358(MACRO, __VA_ARGS__)


#define MU_DO_360(MACRO, ...) \
MACRO(360, __VA_ARGS__) \
MU_DO_359(MACRO, __VA_ARGS__)


#define MU_DO_361(MACRO, ...) \
MACRO(361, __VA_ARGS__) \
MU_DO_360(MACRO, __VA_ARGS__)


#define MU_DO_362(MACRO, ...) \
MACRO(362, __VA_ARGS__) \
MU_DO_361(MACRO, __VA_ARGS__)


#define MU_DO_363(MACRO, ...) \
MACRO(363, __VA_ARGS__) \
MU_DO_362(MACRO, __VA_ARGS__)


#define MU_DO_364(MACRO, ...) \
MACRO(364, __VA_ARGS__) \
MU_DO_363(MACRO, __VA_ARGS__)


#define MU_DO_365(MACRO, ...) \
MACRO(365, __VA_ARGS__) \
MU_DO_364(MACRO, __VA_ARGS__)


#define MU_DO_366(MACRO, ...) \
MACRO(366, __VA_ARGS__) \
MU_DO_365(MACRO, __VA_ARGS__)


#define MU_DO_367(MACRO, ...) \
MACRO(367, __VA_ARGS__) \
MU_DO_366(MACRO, __VA_ARGS__)


#define MU_DO_368(MACRO, ...) \
MACRO(368, __VA_ARGS__) \
MU_DO_367(MACRO, __VA_ARGS__)


#define MU_DO_369(MACRO, ...) \
MACRO(369, __VA_ARGS__) \
MU_DO_368(MACRO, __VA_ARGS__)


#define MU_DO_370(MACRO, ...) \
MACRO(370, __VA_ARGS__) \
MU_DO_369(MACRO, __VA_ARGS__)


#define MU_DO_371(MACRO, ...) \
MACRO(371, __VA_ARGS__) \
MU_DO_370(MACRO, __VA_ARGS__)


#define MU_DO_372(MACRO, ...) \
MACRO(372, __VA_ARGS__) \
MU_DO_371(MACRO, __VA_ARGS__)


#define MU_DO_373(MACRO, ...) \
MACRO(373, __VA_ARGS__) \
MU_DO_372(MACRO, __VA_ARGS__)


#define MU_DO_374(MACRO, ...) \
MACRO(374, __VA_ARGS__) \
MU_DO_373(MACRO, __VA_ARGS__)


#define MU_DO_375(MACRO, ...) \
MACRO(375, __VA_ARGS__) \
MU_DO_374(MACRO, __VA_ARGS__)


#define MU_DO_376(MACRO, ...) \
MACRO(376, __VA_ARGS__) \
MU_DO_375(MACRO, __VA_ARGS__)


#define MU_DO_377(MACRO, ...) \
MACRO(377, __VA_ARGS__) \
MU_DO_376(MACRO, __VA_ARGS__)


#define MU_DO_378(MACRO, ...) \
MACRO(378, __VA_ARGS__) \
MU_DO_377(MACRO, __VA_ARGS__)


#define MU_DO_379(MACRO, ...) \
MACRO(379, __VA_ARGS__) \
MU_DO_378(MACRO, __VA_ARGS__)


#define MU_DO_380(MACRO, ...) \
MACRO(380, __VA_ARGS__) \
MU_DO_379(MACRO, __VA_ARGS__)


#define MU_DO_381(MACRO, ...) \
MACRO(381, __VA_ARGS__) \
MU_DO_380(MACRO, __VA_ARGS__)


#define MU_DO_382(MACRO, ...) \
MACRO(382, __VA_ARGS__) \
MU_DO_381(MACRO, __VA_ARGS__)


#define MU_DO_383(MACRO, ...) \
MACRO(383, __VA_ARGS__) \
MU_DO_382(MACRO, __VA_ARGS__)


#define MU_DO_384(MACRO, ...) \
MACRO(384, __VA_ARGS__) \
MU_DO_383(MACRO, __VA_ARGS__)


#define MU_DO_385(MACRO, ...) \
MACRO(385, __VA_ARGS__) \
MU_DO_384(MACRO, __VA_ARGS__)


#define MU_DO_386(MACRO, ...) \
MACRO(386, __VA_ARGS__) \
MU_DO_385(MACRO, __VA_ARGS__)


#define MU_DO_387(MACRO, ...) \
MACRO(387, __VA_ARGS__) \
MU_DO_386(MACRO, __VA_ARGS__)


#define MU_DO_388(MACRO, ...) \
MACRO(388, __VA_ARGS__) \
MU_DO_387(MACRO, __VA_ARGS__)


#define MU_DO_389(MACRO, ...) \
MACRO(389, __VA_ARGS__) \
MU_DO_388(MACRO, __VA_ARGS__)


#define MU_DO_390(MACRO, ...) \
MACRO(390, __VA_ARGS__) \
MU_DO_389(MACRO, __VA_ARGS__)


#define MU_DO_391(MACRO, ...) \
MACRO(391, __VA_ARGS__) \
MU_DO_390(MACRO, __VA_ARGS__)


#define MU_DO_392(MACRO, ...) \
MACRO(392, __VA_ARGS__) \
MU_DO_391(MACRO, __VA_ARGS__)


#define MU_DO_393(MACRO, ...) \
MACRO(393, __VA_ARGS__) \
MU_DO_392(MACRO, __VA_ARGS__)


#define MU_DO_394(MACRO, ...) \
MACRO(394, __VA_ARGS__) \
MU_DO_393(MACRO, __VA_ARGS__)


#define MU_DO_395(MACRO, ...) \
MACRO(395, __VA_ARGS__) \
MU_DO_394(MACRO, __VA_ARGS__)


#define MU_DO_396(MACRO, ...) \
MACRO(396, __VA_ARGS__) \
MU_DO_395(MACRO, __VA_ARGS__)


#define MU_DO_397(MACRO, ...) \
MACRO(397, __VA_ARGS__) \
MU_DO_396(MACRO, __VA_ARGS__)


#define MU_DO_398(MACRO, ...) \
MACRO(398, __VA_ARGS__) \
MU_DO_397(MACRO, __VA_ARGS__)


#define MU_DO_399(MACRO, ...) \
MACRO(399, __VA_ARGS__) \
MU_DO_398(MACRO, __VA_ARGS__)


#define MU_DO_400(MACRO, ...) \
MACRO(400, __VA_ARGS__) \
MU_DO_399(MACRO, __VA_ARGS__)


#define MU_DO_401(MACRO, ...) \
MACRO(401, __VA_ARGS__) \
MU_DO_400(MACRO, __VA_ARGS__)


#define MU_DO_402(MACRO, ...) \
MACRO(402, __VA_ARGS__) \
MU_DO_401(MACRO, __VA_ARGS__)


#define MU_DO_403(MACRO, ...) \
MACRO(403, __VA_ARGS__) \
MU_DO_402(MACRO, __VA_ARGS__)


#define MU_DO_404(MACRO, ...) \
MACRO(404, __VA_ARGS__) \
MU_DO_403(MACRO, __VA_ARGS__)


#define MU_DO_405(MACRO, ...) \
MACRO(405, __VA_ARGS__) \
MU_DO_404(MACRO, __VA_ARGS__)


#define MU_DO_406(MACRO, ...) \
MACRO(406, __VA_ARGS__) \
MU_DO_405(MACRO, __VA_ARGS__)


#define MU_DO_407(MACRO, ...) \
MACRO(407, __VA_ARGS__) \
MU_DO_406(MACRO, __VA_ARGS__)


#define MU_DO_408(MACRO, ...) \
MACRO(408, __VA_ARGS__) \
MU_DO_407(MACRO, __VA_ARGS__)


#define MU_DO_409(MACRO, ...) \
MACRO(409, __VA_ARGS__) \
MU_DO_408(MACRO, __VA_ARGS__)


#define MU_DO_410(MACRO, ...) \
MACRO(410, __VA_ARGS__) \
MU_DO_409(MACRO, __VA_ARGS__)


#define MU_DO_411(MACRO, ...) \
MACRO(411, __VA_ARGS__) \
MU_DO_410(MACRO, __VA_ARGS__)


#define MU_DO_412(MACRO, ...) \
MACRO(412, __VA_ARGS__) \
MU_DO_411(MACRO, __VA_ARGS__)


#define MU_DO_413(MACRO, ...) \
MACRO(413, __VA_ARGS__) \
MU_DO_412(MACRO, __VA_ARGS__)


#define MU_DO_414(MACRO, ...) \
MACRO(414, __VA_ARGS__) \
MU_DO_413(MACRO, __VA_ARGS__)


#define MU_DO_415(MACRO, ...) \
MACRO(415, __VA_ARGS__) \
MU_DO_414(MACRO, __VA_ARGS__)


#define MU_DO_416(MACRO, ...) \
MACRO(416, __VA_ARGS__) \
MU_DO_415(MACRO, __VA_ARGS__)


#define MU_DO_417(MACRO, ...) \
MACRO(417, __VA_ARGS__) \
MU_DO_416(MACRO, __VA_ARGS__)


#define MU_DO_418(MACRO, ...) \
MACRO(418, __VA_ARGS__) \
MU_DO_417(MACRO, __VA_ARGS__)


#define MU_DO_419(MACRO, ...) \
MACRO(419, __VA_ARGS__) \
MU_DO_418(MACRO, __VA_ARGS__)


#define MU_DO_420(MACRO, ...) \
MACRO(420, __VA_ARGS__) \
MU_DO_419(MACRO, __VA_ARGS__)


#define MU_DO_421(MACRO, ...) \
MACRO(421, __VA_ARGS__) \
MU_DO_420(MACRO, __VA_ARGS__)


#define MU_DO_422(MACRO, ...) \
MACRO(422, __VA_ARGS__) \
MU_DO_421(MACRO, __VA_ARGS__)


#define MU_DO_423(MACRO, ...) \
MACRO(423, __VA_ARGS__) \
MU_DO_422(MACRO, __VA_ARGS__)


#define MU_DO_424(MACRO, ...) \
MACRO(424, __VA_ARGS__) \
MU_DO_423(MACRO, __VA_ARGS__)


#define MU_DO_425(MACRO, ...) \
MACRO(425, __VA_ARGS__) \
MU_DO_424(MACRO, __VA_ARGS__)


#define MU_DO_426(MACRO, ...) \
MACRO(426, __VA_ARGS__) \
MU_DO_425(MACRO, __VA_ARGS__)


#define MU_DO_427(MACRO, ...) \
MACRO(427, __VA_ARGS__) \
MU_DO_426(MACRO, __VA_ARGS__)


#define MU_DO_428(MACRO, ...) \
MACRO(428, __VA_ARGS__) \
MU_DO_427(MACRO, __VA_ARGS__)


#define MU_DO_429(MACRO, ...) \
MACRO(429, __VA_ARGS__) \
MU_DO_428(MACRO, __VA_ARGS__)


#define MU_DO_430(MACRO, ...) \
MACRO(430, __VA_ARGS__) \
MU_DO_429(MACRO, __VA_ARGS__)


#define MU_DO_431(MACRO, ...) \
MACRO(431, __VA_ARGS__) \
MU_DO_430(MACRO, __VA_ARGS__)


#define MU_DO_432(MACRO, ...) \
MACRO(432, __VA_ARGS__) \
MU_DO_431(MACRO, __VA_ARGS__)


#define MU_DO_433(MACRO, ...) \
MACRO(433, __VA_ARGS__) \
MU_DO_432(MACRO, __VA_ARGS__)


#define MU_DO_434(MACRO, ...) \
MACRO(434, __VA_ARGS__) \
MU_DO_433(MACRO, __VA_ARGS__)


#define MU_DO_435(MACRO, ...) \
MACRO(435, __VA_ARGS__) \
MU_DO_434(MACRO, __VA_ARGS__)


#define MU_DO_436(MACRO, ...) \
MACRO(436, __VA_ARGS__) \
MU_DO_435(MACRO, __VA_ARGS__)


#define MU_DO_437(MACRO, ...) \
MACRO(437, __VA_ARGS__) \
MU_DO_436(MACRO, __VA_ARGS__)


#define MU_DO_438(MACRO, ...) \
MACRO(438, __VA_ARGS__) \
MU_DO_437(MACRO, __VA_ARGS__)


#define MU_DO_439(MACRO, ...) \
MACRO(439, __VA_ARGS__) \
MU_DO_438(MACRO, __VA_ARGS__)


#define MU_DO_440(MACRO, ...) \
MACRO(440, __VA_ARGS__) \
MU_DO_439(MACRO, __VA_ARGS__)


#define MU_DO_441(MACRO, ...) \
MACRO(441, __VA_ARGS__) \
MU_DO_440(MACRO, __VA_ARGS__)


#define MU_DO_442(MACRO, ...) \
MACRO(442, __VA_ARGS__) \
MU_DO_441(MACRO, __VA_ARGS__)


#define MU_DO_443(MACRO, ...) \
MACRO(443, __VA_ARGS__) \
MU_DO_442(MACRO, __VA_ARGS__)


#define MU_DO_444(MACRO, ...) \
MACRO(444, __VA_ARGS__) \
MU_DO_443(MACRO, __VA_ARGS__)


#define MU_DO_445(MACRO, ...) \
MACRO(445, __VA_ARGS__) \
MU_DO_444(MACRO, __VA_ARGS__)


#define MU_DO_446(MACRO, ...) \
MACRO(446, __VA_ARGS__) \
MU_DO_445(MACRO, __VA_ARGS__)


#define MU_DO_447(MACRO, ...) \
MACRO(447, __VA_ARGS__) \
MU_DO_446(MACRO, __VA_ARGS__)


#define MU_DO_448(MACRO, ...) \
MACRO(448, __VA_ARGS__) \
MU_DO_447(MACRO, __VA_ARGS__)


#define MU_DO_449(MACRO, ...) \
MACRO(449, __VA_ARGS__) \
MU_DO_448(MACRO, __VA_ARGS__)


#define MU_DO_450(MACRO, ...) \
MACRO(450, __VA_ARGS__) \
MU_DO_449(MACRO, __VA_ARGS__)


#define MU_DO_451(MACRO, ...) \
MACRO(451, __VA_ARGS__) \
MU_DO_450(MACRO, __VA_ARGS__)


#define MU_DO_452(MACRO, ...) \
MACRO(452, __VA_ARGS__) \
MU_DO_451(MACRO, __VA_ARGS__)


#define MU_DO_453(MACRO, ...) \
MACRO(453, __VA_ARGS__) \
MU_DO_452(MACRO, __VA_ARGS__)


#define MU_DO_454(MACRO, ...) \
MACRO(454, __VA_ARGS__) \
MU_DO_453(MACRO, __VA_ARGS__)


#define MU_DO_455(MACRO, ...) \
MACRO(455, __VA_ARGS__) \
MU_DO_454(MACRO, __VA_ARGS__)


#define MU_DO_456(MACRO, ...) \
MACRO(456, __VA_ARGS__) \
MU_DO_455(MACRO, __VA_ARGS__)


#define MU_DO_457(MACRO, ...) \
MACRO(457, __VA_ARGS__) \
MU_DO_456(MACRO, __VA_ARGS__)


#define MU_DO_458(MACRO, ...) \
MACRO(458, __VA_ARGS__) \
MU_DO_457(MACRO, __VA_ARGS__)


#define MU_DO_459(MACRO, ...) \
MACRO(459, __VA_ARGS__) \
MU_DO_458(MACRO, __VA_ARGS__)


#define MU_DO_460(MACRO, ...) \
MACRO(460, __VA_ARGS__) \
MU_DO_459(MACRO, __VA_ARGS__)


#define MU_DO_461(MACRO, ...) \
MACRO(461, __VA_ARGS__) \
MU_DO_460(MACRO, __VA_ARGS__)


#define MU_DO_462(MACRO, ...) \
MACRO(462, __VA_ARGS__) \
MU_DO_461(MACRO, __VA_ARGS__)


#define MU_DO_463(MACRO, ...) \
MACRO(463, __VA_ARGS__) \
MU_DO_462(MACRO, __VA_ARGS__)


#define MU_DO_464(MACRO, ...) \
MACRO(464, __VA_ARGS__) \
MU_DO_463(MACRO, __VA_ARGS__)


#define MU_DO_465(MACRO, ...) \
MACRO(465, __VA_ARGS__) \
MU_DO_464(MACRO, __VA_ARGS__)


#define MU_DO_466(MACRO, ...) \
MACRO(466, __VA_ARGS__) \
MU_DO_465(MACRO, __VA_ARGS__)


#define MU_DO_467(MACRO, ...) \
MACRO(467, __VA_ARGS__) \
MU_DO_466(MACRO, __VA_ARGS__)


#define MU_DO_468(MACRO, ...) \
MACRO(468, __VA_ARGS__) \
MU_DO_467(MACRO, __VA_ARGS__)


#define MU_DO_469(MACRO, ...) \
MACRO(469, __VA_ARGS__) \
MU_DO_468(MACRO, __VA_ARGS__)


#define MU_DO_470(MACRO, ...) \
MACRO(470, __VA_ARGS__) \
MU_DO_469(MACRO, __VA_ARGS__)


#define MU_DO_471(MACRO, ...) \
MACRO(471, __VA_ARGS__) \
MU_DO_470(MACRO, __VA_ARGS__)


#define MU_DO_472(MACRO, ...) \
MACRO(472, __VA_ARGS__) \
MU_DO_471(MACRO, __VA_ARGS__)


#define MU_DO_473(MACRO, ...) \
MACRO(473, __VA_ARGS__) \
MU_DO_472(MACRO, __VA_ARGS__)


#define MU_DO_474(MACRO, ...) \
MACRO(474, __VA_ARGS__) \
MU_DO_473(MACRO, __VA_ARGS__)


#define MU_DO_475(MACRO, ...) \
MACRO(475, __VA_ARGS__) \
MU_DO_474(MACRO, __VA_ARGS__)


#define MU_DO_476(MACRO, ...) \
MACRO(476, __VA_ARGS__) \
MU_DO_475(MACRO, __VA_ARGS__)


#define MU_DO_477(MACRO, ...) \
MACRO(477, __VA_ARGS__) \
MU_DO_476(MACRO, __VA_ARGS__)


#define MU_DO_478(MACRO, ...) \
MACRO(478, __VA_ARGS__) \
MU_DO_477(MACRO, __VA_ARGS__)


#define MU_DO_479(MACRO, ...) \
MACRO(479, __VA_ARGS__) \
MU_DO_478(MACRO, __VA_ARGS__)


#define MU_DO_480(MACRO, ...) \
MACRO(480, __VA_ARGS__) \
MU_DO_479(MACRO, __VA_ARGS__)


#define MU_DO_481(MACRO, ...) \
MACRO(481, __VA_ARGS__) \
MU_DO_480(MACRO, __VA_ARGS__)


#define MU_DO_482(MACRO, ...) \
MACRO(482, __VA_ARGS__) \
MU_DO_481(MACRO, __VA_ARGS__)


#define MU_DO_483(MACRO, ...) \
MACRO(483, __VA_ARGS__) \
MU_DO_482(MACRO, __VA_ARGS__)


#define MU_DO_484(MACRO, ...) \
MACRO(484, __VA_ARGS__) \
MU_DO_483(MACRO, __VA_ARGS__)


#define MU_DO_485(MACRO, ...) \
MACRO(485, __VA_ARGS__) \
MU_DO_484(MACRO, __VA_ARGS__)


#define MU_DO_486(MACRO, ...) \
MACRO(486, __VA_ARGS__) \
MU_DO_485(MACRO, __VA_ARGS__)


#define MU_DO_487(MACRO, ...) \
MACRO(487, __VA_ARGS__) \
MU_DO_486(MACRO, __VA_ARGS__)


#define MU_DO_488(MACRO, ...) \
MACRO(488, __VA_ARGS__) \
MU_DO_487(MACRO, __VA_ARGS__)


#define MU_DO_489(MACRO, ...) \
MACRO(489, __VA_ARGS__) \
MU_DO_488(MACRO, __VA_ARGS__)


#define MU_DO_490(MACRO, ...) \
MACRO(490, __VA_ARGS__) \
MU_DO_489(MACRO, __VA_ARGS__)


#define MU_DO_491(MACRO, ...) \
MACRO(491, __VA_ARGS__) \
MU_DO_490(MACRO, __VA_ARGS__)


#define MU_DO_492(MACRO, ...) \
MACRO(492, __VA_ARGS__) \
MU_DO_491(MACRO, __VA_ARGS__)


#define MU_DO_493(MACRO, ...) \
MACRO(493, __VA_ARGS__) \
MU_DO_492(MACRO, __VA_ARGS__)


#define MU_DO_494(MACRO, ...) \
MACRO(494, __VA_ARGS__) \
MU_DO_493(MACRO, __VA_ARGS__)


#define MU_DO_495(MACRO, ...) \
MACRO(495, __VA_ARGS__) \
MU_DO_494(MACRO, __VA_ARGS__)


#define MU_DO_496(MACRO, ...) \
MACRO(496, __VA_ARGS__) \
MU_DO_495(MACRO, __VA_ARGS__)


#define MU_DO_497(MACRO, ...) \
MACRO(497, __VA_ARGS__) \
MU_DO_496(MACRO, __VA_ARGS__)


#define MU_DO_498(MACRO, ...) \
MACRO(498, __VA_ARGS__) \
MU_DO_497(MACRO, __VA_ARGS__)


#define MU_DO_499(MACRO, ...) \
MACRO(499, __VA_ARGS__) \
MU_DO_498(MACRO, __VA_ARGS__)


#define MU_DO_500(MACRO, ...) \
MACRO(500, __VA_ARGS__) \
MU_DO_499(MACRO, __VA_ARGS__)


#define MU_DO_501(MACRO, ...) \
MACRO(501, __VA_ARGS__) \
MU_DO_500(MACRO, __VA_ARGS__)


#define MU_DO_502(MACRO, ...) \
MACRO(502, __VA_ARGS__) \
MU_DO_501(MACRO, __VA_ARGS__)


#define MU_DO_503(MACRO, ...) \
MACRO(503, __VA_ARGS__) \
MU_DO_502(MACRO, __VA_ARGS__)


#define MU_DO_504(MACRO, ...) \
MACRO(504, __VA_ARGS__) \
MU_DO_503(MACRO, __VA_ARGS__)


#define MU_DO_505(MACRO, ...) \
MACRO(505, __VA_ARGS__) \
MU_DO_504(MACRO, __VA_ARGS__)


#define MU_DO_506(MACRO, ...) \
MACRO(506, __VA_ARGS__) \
MU_DO_505(MACRO, __VA_ARGS__)


#define MU_DO_507(MACRO, ...) \
MACRO(507, __VA_ARGS__) \
MU_DO_506(MACRO, __VA_ARGS__)


#define MU_DO_508(MACRO, ...) \
MACRO(508, __VA_ARGS__) \
MU_DO_507(MACRO, __VA_ARGS__)


#define MU_DO_509(MACRO, ...) \
MACRO(509, __VA_ARGS__) \
MU_DO_508(MACRO, __VA_ARGS__)


#define MU_DO_510(MACRO, ...) \
MACRO(510, __VA_ARGS__) \
MU_DO_509(MACRO, __VA_ARGS__)


#define MU_DO_511(MACRO, ...) \
MACRO(511, __VA_ARGS__) \
MU_DO_510(MACRO, __VA_ARGS__)


#define MU_DO_512(MACRO, ...) \
MACRO(512, __VA_ARGS__) \
MU_DO_511(MACRO, __VA_ARGS__)


#define MU_DO_513(MACRO, ...) \
MACRO(513, __VA_ARGS__) \
MU_DO_512(MACRO, __VA_ARGS__)


#define MU_DO_514(MACRO, ...) \
MACRO(514, __VA_ARGS__) \
MU_DO_513(MACRO, __VA_ARGS__)


#define MU_DO_515(MACRO, ...) \
MACRO(515, __VA_ARGS__) \
MU_DO_514(MACRO, __VA_ARGS__)


#define MU_DO_516(MACRO, ...) \
MACRO(516, __VA_ARGS__) \
MU_DO_515(MACRO, __VA_ARGS__)


#define MU_DO_517(MACRO, ...) \
MACRO(517, __VA_ARGS__) \
MU_DO_516(MACRO, __VA_ARGS__)


#define MU_DO_518(MACRO, ...) \
MACRO(518, __VA_ARGS__) \
MU_DO_517(MACRO, __VA_ARGS__)


#define MU_DO_519(MACRO, ...) \
MACRO(519, __VA_ARGS__) \
MU_DO_518(MACRO, __VA_ARGS__)


#define MU_DO_520(MACRO, ...) \
MACRO(520, __VA_ARGS__) \
MU_DO_519(MACRO, __VA_ARGS__)


#define MU_DO_521(MACRO, ...) \
MACRO(521, __VA_ARGS__) \
MU_DO_520(MACRO, __VA_ARGS__)


#define MU_DO_522(MACRO, ...) \
MACRO(522, __VA_ARGS__) \
MU_DO_521(MACRO, __VA_ARGS__)


#define MU_DO_523(MACRO, ...) \
MACRO(523, __VA_ARGS__) \
MU_DO_522(MACRO, __VA_ARGS__)


#define MU_DO_524(MACRO, ...) \
MACRO(524, __VA_ARGS__) \
MU_DO_523(MACRO, __VA_ARGS__)


#define MU_DO_525(MACRO, ...) \
MACRO(525, __VA_ARGS__) \
MU_DO_524(MACRO, __VA_ARGS__)


#define MU_DO_526(MACRO, ...) \
MACRO(526, __VA_ARGS__) \
MU_DO_525(MACRO, __VA_ARGS__)


#define MU_DO_527(MACRO, ...) \
MACRO(527, __VA_ARGS__) \
MU_DO_526(MACRO, __VA_ARGS__)


#define MU_DO_528(MACRO, ...) \
MACRO(528, __VA_ARGS__) \
MU_DO_527(MACRO, __VA_ARGS__)


#define MU_DO_529(MACRO, ...) \
MACRO(529, __VA_ARGS__) \
MU_DO_528(MACRO, __VA_ARGS__)


#define MU_DO_530(MACRO, ...) \
MACRO(530, __VA_ARGS__) \
MU_DO_529(MACRO, __VA_ARGS__)


#define MU_DO_531(MACRO, ...) \
MACRO(531, __VA_ARGS__) \
MU_DO_530(MACRO, __VA_ARGS__)


#define MU_DO_532(MACRO, ...) \
MACRO(532, __VA_ARGS__) \
MU_DO_531(MACRO, __VA_ARGS__)


#define MU_DO_533(MACRO, ...) \
MACRO(533, __VA_ARGS__) \
MU_DO_532(MACRO, __VA_ARGS__)


#define MU_DO_534(MACRO, ...) \
MACRO(534, __VA_ARGS__) \
MU_DO_533(MACRO, __VA_ARGS__)


#define MU_DO_535(MACRO, ...) \
MACRO(535, __VA_ARGS__) \
MU_DO_534(MACRO, __VA_ARGS__)


#define MU_DO_536(MACRO, ...) \
MACRO(536, __VA_ARGS__) \
MU_DO_535(MACRO, __VA_ARGS__)


#define MU_DO_537(MACRO, ...) \
MACRO(537, __VA_ARGS__) \
MU_DO_536(MACRO, __VA_ARGS__)


#define MU_DO_538(MACRO, ...) \
MACRO(538, __VA_ARGS__) \
MU_DO_537(MACRO, __VA_ARGS__)


#define MU_DO_539(MACRO, ...) \
MACRO(539, __VA_ARGS__) \
MU_DO_538(MACRO, __VA_ARGS__)


#define MU_DO_540(MACRO, ...) \
MACRO(540, __VA_ARGS__) \
MU_DO_539(MACRO, __VA_ARGS__)


#define MU_DO_541(MACRO, ...) \
MACRO(541, __VA_ARGS__) \
MU_DO_540(MACRO, __VA_ARGS__)


#define MU_DO_542(MACRO, ...) \
MACRO(542, __VA_ARGS__) \
MU_DO_541(MACRO, __VA_ARGS__)


#define MU_DO_543(MACRO, ...) \
MACRO(543, __VA_ARGS__) \
MU_DO_542(MACRO, __VA_ARGS__)


#define MU_DO_544(MACRO, ...) \
MACRO(544, __VA_ARGS__) \
MU_DO_543(MACRO, __VA_ARGS__)


#define MU_DO_545(MACRO, ...) \
MACRO(545, __VA_ARGS__) \
MU_DO_544(MACRO, __VA_ARGS__)


#define MU_DO_546(MACRO, ...) \
MACRO(546, __VA_ARGS__) \
MU_DO_545(MACRO, __VA_ARGS__)


#define MU_DO_547(MACRO, ...) \
MACRO(547, __VA_ARGS__) \
MU_DO_546(MACRO, __VA_ARGS__)


#define MU_DO_548(MACRO, ...) \
MACRO(548, __VA_ARGS__) \
MU_DO_547(MACRO, __VA_ARGS__)


#define MU_DO_549(MACRO, ...) \
MACRO(549, __VA_ARGS__) \
MU_DO_548(MACRO, __VA_ARGS__)


#define MU_DO_550(MACRO, ...) \
MACRO(550, __VA_ARGS__) \
MU_DO_549(MACRO, __VA_ARGS__)


#define MU_DO_551(MACRO, ...) \
MACRO(551, __VA_ARGS__) \
MU_DO_550(MACRO, __VA_ARGS__)


#define MU_DO_552(MACRO, ...) \
MACRO(552, __VA_ARGS__) \
MU_DO_551(MACRO, __VA_ARGS__)


#define MU_DO_553(MACRO, ...) \
MACRO(553, __VA_ARGS__) \
MU_DO_552(MACRO, __VA_ARGS__)


#define MU_DO_554(MACRO, ...) \
MACRO(554, __VA_ARGS__) \
MU_DO_553(MACRO, __VA_ARGS__)


#define MU_DO_555(MACRO, ...) \
MACRO(555, __VA_ARGS__) \
MU_DO_554(MACRO, __VA_ARGS__)


#define MU_DO_556(MACRO, ...) \
MACRO(556, __VA_ARGS__) \
MU_DO_555(MACRO, __VA_ARGS__)


#define MU_DO_557(MACRO, ...) \
MACRO(557, __VA_ARGS__) \
MU_DO_556(MACRO, __VA_ARGS__)


#define MU_DO_558(MACRO, ...) \
MACRO(558, __VA_ARGS__) \
MU_DO_557(MACRO, __VA_ARGS__)


#define MU_DO_559(MACRO, ...) \
MACRO(559, __VA_ARGS__) \
MU_DO_558(MACRO, __VA_ARGS__)


#define MU_DO_560(MACRO, ...) \
MACRO(560, __VA_ARGS__) \
MU_DO_559(MACRO, __VA_ARGS__)


#define MU_DO_561(MACRO, ...) \
MACRO(561, __VA_ARGS__) \
MU_DO_560(MACRO, __VA_ARGS__)


#define MU_DO_562(MACRO, ...) \
MACRO(562, __VA_ARGS__) \
MU_DO_561(MACRO, __VA_ARGS__)


#define MU_DO_563(MACRO, ...) \
MACRO(563, __VA_ARGS__) \
MU_DO_562(MACRO, __VA_ARGS__)


#define MU_DO_564(MACRO, ...) \
MACRO(564, __VA_ARGS__) \
MU_DO_563(MACRO, __VA_ARGS__)


#define MU_DO_565(MACRO, ...) \
MACRO(565, __VA_ARGS__) \
MU_DO_564(MACRO, __VA_ARGS__)


#define MU_DO_566(MACRO, ...) \
MACRO(566, __VA_ARGS__) \
MU_DO_565(MACRO, __VA_ARGS__)


#define MU_DO_567(MACRO, ...) \
MACRO(567, __VA_ARGS__) \
MU_DO_566(MACRO, __VA_ARGS__)


#define MU_DO_568(MACRO, ...) \
MACRO(568, __VA_ARGS__) \
MU_DO_567(MACRO, __VA_ARGS__)


#define MU_DO_569(MACRO, ...) \
MACRO(569, __VA_ARGS__) \
MU_DO_568(MACRO, __VA_ARGS__)


#define MU_DO_570(MACRO, ...) \
MACRO(570, __VA_ARGS__) \
MU_DO_569(MACRO, __VA_ARGS__)


#define MU_DO_571(MACRO, ...) \
MACRO(571, __VA_ARGS__) \
MU_DO_570(MACRO, __VA_ARGS__)


#define MU_DO_572(MACRO, ...) \
MACRO(572, __VA_ARGS__) \
MU_DO_571(MACRO, __VA_ARGS__)


#define MU_DO_573(MACRO, ...) \
MACRO(573, __VA_ARGS__) \
MU_DO_572(MACRO, __VA_ARGS__)


#define MU_DO_574(MACRO, ...) \
MACRO(574, __VA_ARGS__) \
MU_DO_573(MACRO, __VA_ARGS__)


#define MU_DO_575(MACRO, ...) \
MACRO(575, __VA_ARGS__) \
MU_DO_574(MACRO, __VA_ARGS__)


#define MU_DO_576(MACRO, ...) \
MACRO(576, __VA_ARGS__) \
MU_DO_575(MACRO, __VA_ARGS__)


#define MU_DO_577(MACRO, ...) \
MACRO(577, __VA_ARGS__) \
MU_DO_576(MACRO, __VA_ARGS__)


#define MU_DO_578(MACRO, ...) \
MACRO(578, __VA_ARGS__) \
MU_DO_577(MACRO, __VA_ARGS__)


#define MU_DO_579(MACRO, ...) \
MACRO(579, __VA_ARGS__) \
MU_DO_578(MACRO, __VA_ARGS__)


#define MU_DO_580(MACRO, ...) \
MACRO(580, __VA_ARGS__) \
MU_DO_579(MACRO, __VA_ARGS__)


#define MU_DO_581(MACRO, ...) \
MACRO(581, __VA_ARGS__) \
MU_DO_580(MACRO, __VA_ARGS__)


#define MU_DO_582(MACRO, ...) \
MACRO(582, __VA_ARGS__) \
MU_DO_581(MACRO, __VA_ARGS__)


#define MU_DO_583(MACRO, ...) \
MACRO(583, __VA_ARGS__) \
MU_DO_582(MACRO, __VA_ARGS__)


#define MU_DO_584(MACRO, ...) \
MACRO(584, __VA_ARGS__) \
MU_DO_583(MACRO, __VA_ARGS__)


#define MU_DO_585(MACRO, ...) \
MACRO(585, __VA_ARGS__) \
MU_DO_584(MACRO, __VA_ARGS__)


#define MU_DO_586(MACRO, ...) \
MACRO(586, __VA_ARGS__) \
MU_DO_585(MACRO, __VA_ARGS__)


#define MU_DO_587(MACRO, ...) \
MACRO(587, __VA_ARGS__) \
MU_DO_586(MACRO, __VA_ARGS__)


#define MU_DO_588(MACRO, ...) \
MACRO(588, __VA_ARGS__) \
MU_DO_587(MACRO, __VA_ARGS__)


#define MU_DO_589(MACRO, ...) \
MACRO(589, __VA_ARGS__) \
MU_DO_588(MACRO, __VA_ARGS__)


#define MU_DO_590(MACRO, ...) \
MACRO(590, __VA_ARGS__) \
MU_DO_589(MACRO, __VA_ARGS__)


#define MU_DO_591(MACRO, ...) \
MACRO(591, __VA_ARGS__) \
MU_DO_590(MACRO, __VA_ARGS__)


#define MU_DO_592(MACRO, ...) \
MACRO(592, __VA_ARGS__) \
MU_DO_591(MACRO, __VA_ARGS__)


#define MU_DO_593(MACRO, ...) \
MACRO(593, __VA_ARGS__) \
MU_DO_592(MACRO, __VA_ARGS__)


#define MU_DO_594(MACRO, ...) \
MACRO(594, __VA_ARGS__) \
MU_DO_593(MACRO, __VA_ARGS__)


#define MU_DO_595(MACRO, ...) \
MACRO(595, __VA_ARGS__) \
MU_DO_594(MACRO, __VA_ARGS__)


#define MU_DO_596(MACRO, ...) \
MACRO(596, __VA_ARGS__) \
MU_DO_595(MACRO, __VA_ARGS__)


#define MU_DO_597(MACRO, ...) \
MACRO(597, __VA_ARGS__) \
MU_DO_596(MACRO, __VA_ARGS__)


#define MU_DO_598(MACRO, ...) \
MACRO(598, __VA_ARGS__) \
MU_DO_597(MACRO, __VA_ARGS__)


#define MU_DO_599(MACRO, ...) \
MACRO(599, __VA_ARGS__) \
MU_DO_598(MACRO, __VA_ARGS__)


#define MU_DO_600(MACRO, ...) \
MACRO(600, __VA_ARGS__) \
MU_DO_599(MACRO, __VA_ARGS__)


#define MU_DO_601(MACRO, ...) \
MACRO(601, __VA_ARGS__) \
MU_DO_600(MACRO, __VA_ARGS__)


#define MU_DO_602(MACRO, ...) \
MACRO(602, __VA_ARGS__) \
MU_DO_601(MACRO, __VA_ARGS__)


#define MU_DO_603(MACRO, ...) \
MACRO(603, __VA_ARGS__) \
MU_DO_602(MACRO, __VA_ARGS__)


#define MU_DO_604(MACRO, ...) \
MACRO(604, __VA_ARGS__) \
MU_DO_603(MACRO, __VA_ARGS__)


#define MU_DO_605(MACRO, ...) \
MACRO(605, __VA_ARGS__) \
MU_DO_604(MACRO, __VA_ARGS__)


#define MU_DO_606(MACRO, ...) \
MACRO(606, __VA_ARGS__) \
MU_DO_605(MACRO, __VA_ARGS__)


#define MU_DO_607(MACRO, ...) \
MACRO(607, __VA_ARGS__) \
MU_DO_606(MACRO, __VA_ARGS__)


#define MU_DO_608(MACRO, ...) \
MACRO(608, __VA_ARGS__) \
MU_DO_607(MACRO, __VA_ARGS__)


#define MU_DO_609(MACRO, ...) \
MACRO(609, __VA_ARGS__) \
MU_DO_608(MACRO, __VA_ARGS__)


#define MU_DO_610(MACRO, ...) \
MACRO(610, __VA_ARGS__) \
MU_DO_609(MACRO, __VA_ARGS__)


#define MU_DO_611(MACRO, ...) \
MACRO(611, __VA_ARGS__) \
MU_DO_610(MACRO, __VA_ARGS__)


#define MU_DO_612(MACRO, ...) \
MACRO(612, __VA_ARGS__) \
MU_DO_611(MACRO, __VA_ARGS__)


#define MU_DO_613(MACRO, ...) \
MACRO(613, __VA_ARGS__) \
MU_DO_612(MACRO, __VA_ARGS__)


#define MU_DO_614(MACRO, ...) \
MACRO(614, __VA_ARGS__) \
MU_DO_613(MACRO, __VA_ARGS__)


#define MU_DO_615(MACRO, ...) \
MACRO(615, __VA_ARGS__) \
MU_DO_614(MACRO, __VA_ARGS__)


#define MU_DO_616(MACRO, ...) \
MACRO(616, __VA_ARGS__) \
MU_DO_615(MACRO, __VA_ARGS__)


#define MU_DO_617(MACRO, ...) \
MACRO(617, __VA_ARGS__) \
MU_DO_616(MACRO, __VA_ARGS__)


#define MU_DO_618(MACRO, ...) \
MACRO(618, __VA_ARGS__) \
MU_DO_617(MACRO, __VA_ARGS__)


#define MU_DO_619(MACRO, ...) \
MACRO(619, __VA_ARGS__) \
MU_DO_618(MACRO, __VA_ARGS__)


#define MU_DO_620(MACRO, ...) \
MACRO(620, __VA_ARGS__) \
MU_DO_619(MACRO, __VA_ARGS__)


#define MU_DO_621(MACRO, ...) \
MACRO(621, __VA_ARGS__) \
MU_DO_620(MACRO, __VA_ARGS__)


#define MU_DO_622(MACRO, ...) \
MACRO(622, __VA_ARGS__) \
MU_DO_621(MACRO, __VA_ARGS__)


#define MU_DO_623(MACRO, ...) \
MACRO(623, __VA_ARGS__) \
MU_DO_622(MACRO, __VA_ARGS__)


#define MU_DO_624(MACRO, ...) \
MACRO(624, __VA_ARGS__) \
MU_DO_623(MACRO, __VA_ARGS__)


#define MU_DO_625(MACRO, ...) \
MACRO(625, __VA_ARGS__) \
MU_DO_624(MACRO, __VA_ARGS__)


#define MU_DO_626(MACRO, ...) \
MACRO(626, __VA_ARGS__) \
MU_DO_625(MACRO, __VA_ARGS__)


#define MU_DO_627(MACRO, ...) \
MACRO(627, __VA_ARGS__) \
MU_DO_626(MACRO, __VA_ARGS__)


#define MU_DO_628(MACRO, ...) \
MACRO(628, __VA_ARGS__) \
MU_DO_627(MACRO, __VA_ARGS__)


#define MU_DO_629(MACRO, ...) \
MACRO(629, __VA_ARGS__) \
MU_DO_628(MACRO, __VA_ARGS__)


#define MU_DO_630(MACRO, ...) \
MACRO(630, __VA_ARGS__) \
MU_DO_629(MACRO, __VA_ARGS__)


#define MU_DO_631(MACRO, ...) \
MACRO(631, __VA_ARGS__) \
MU_DO_630(MACRO, __VA_ARGS__)


#define MU_DO_632(MACRO, ...) \
MACRO(632, __VA_ARGS__) \
MU_DO_631(MACRO, __VA_ARGS__)


#define MU_DO_633(MACRO, ...) \
MACRO(633, __VA_ARGS__) \
MU_DO_632(MACRO, __VA_ARGS__)


#define MU_DO_634(MACRO, ...) \
MACRO(634, __VA_ARGS__) \
MU_DO_633(MACRO, __VA_ARGS__)


#define MU_DO_635(MACRO, ...) \
MACRO(635, __VA_ARGS__) \
MU_DO_634(MACRO, __VA_ARGS__)


#define MU_DO_636(MACRO, ...) \
MACRO(636, __VA_ARGS__) \
MU_DO_635(MACRO, __VA_ARGS__)


#define MU_DO_637(MACRO, ...) \
MACRO(637, __VA_ARGS__) \
MU_DO_636(MACRO, __VA_ARGS__)


#define MU_DO_638(MACRO, ...) \
MACRO(638, __VA_ARGS__) \
MU_DO_637(MACRO, __VA_ARGS__)


#define MU_DO_639(MACRO, ...) \
MACRO(639, __VA_ARGS__) \
MU_DO_638(MACRO, __VA_ARGS__)


#define MU_DO_640(MACRO, ...) \
MACRO(640, __VA_ARGS__) \
MU_DO_639(MACRO, __VA_ARGS__)


#define MU_DO_641(MACRO, ...) \
MACRO(641, __VA_ARGS__) \
MU_DO_640(MACRO, __VA_ARGS__)


#define MU_DO_642(MACRO, ...) \
MACRO(642, __VA_ARGS__) \
MU_DO_641(MACRO, __VA_ARGS__)


#define MU_DO_643(MACRO, ...) \
MACRO(643, __VA_ARGS__) \
MU_DO_642(MACRO, __VA_ARGS__)


#define MU_DO_644(MACRO, ...) \
MACRO(644, __VA_ARGS__) \
MU_DO_643(MACRO, __VA_ARGS__)


#define MU_DO_645(MACRO, ...) \
MACRO(645, __VA_ARGS__) \
MU_DO_644(MACRO, __VA_ARGS__)


#define MU_DO_646(MACRO, ...) \
MACRO(646, __VA_ARGS__) \
MU_DO_645(MACRO, __VA_ARGS__)


#define MU_DO_647(MACRO, ...) \
MACRO(647, __VA_ARGS__) \
MU_DO_646(MACRO, __VA_ARGS__)


#define MU_DO_648(MACRO, ...) \
MACRO(648, __VA_ARGS__) \
MU_DO_647(MACRO, __VA_ARGS__)


#define MU_DO_649(MACRO, ...) \
MACRO(649, __VA_ARGS__) \
MU_DO_648(MACRO, __VA_ARGS__)


#define MU_DO_650(MACRO, ...) \
MACRO(650, __VA_ARGS__) \
MU_DO_649(MACRO, __VA_ARGS__)


#define MU_DO_651(MACRO, ...) \
MACRO(651, __VA_ARGS__) \
MU_DO_650(MACRO, __VA_ARGS__)


#define MU_DO_652(MACRO, ...) \
MACRO(652, __VA_ARGS__) \
MU_DO_651(MACRO, __VA_ARGS__)


#define MU_DO_653(MACRO, ...) \
MACRO(653, __VA_ARGS__) \
MU_DO_652(MACRO, __VA_ARGS__)


#define MU_DO_654(MACRO, ...) \
MACRO(654, __VA_ARGS__) \
MU_DO_653(MACRO, __VA_ARGS__)


#define MU_DO_655(MACRO, ...) \
MACRO(655, __VA_ARGS__) \
MU_DO_654(MACRO, __VA_ARGS__)


#define MU_DO_656(MACRO, ...) \
MACRO(656, __VA_ARGS__) \
MU_DO_655(MACRO, __VA_ARGS__)


#define MU_DO_657(MACRO, ...) \
MACRO(657, __VA_ARGS__) \
MU_DO_656(MACRO, __VA_ARGS__)


#define MU_DO_658(MACRO, ...) \
MACRO(658, __VA_ARGS__) \
MU_DO_657(MACRO, __VA_ARGS__)


#define MU_DO_659(MACRO, ...) \
MACRO(659, __VA_ARGS__) \
MU_DO_658(MACRO, __VA_ARGS__)


#define MU_DO_660(MACRO, ...) \
MACRO(660, __VA_ARGS__) \
MU_DO_659(MACRO, __VA_ARGS__)


#define MU_DO_661(MACRO, ...) \
MACRO(661, __VA_ARGS__) \
MU_DO_660(MACRO, __VA_ARGS__)


#define MU_DO_662(MACRO, ...) \
MACRO(662, __VA_ARGS__) \
MU_DO_661(MACRO, __VA_ARGS__)


#define MU_DO_663(MACRO, ...) \
MACRO(663, __VA_ARGS__) \
MU_DO_662(MACRO, __VA_ARGS__)


#define MU_DO_664(MACRO, ...) \
MACRO(664, __VA_ARGS__) \
MU_DO_663(MACRO, __VA_ARGS__)


#define MU_DO_665(MACRO, ...) \
MACRO(665, __VA_ARGS__) \
MU_DO_664(MACRO, __VA_ARGS__)


#define MU_DO_666(MACRO, ...) \
MACRO(666, __VA_ARGS__) \
MU_DO_665(MACRO, __VA_ARGS__)


#define MU_DO_667(MACRO, ...) \
MACRO(667, __VA_ARGS__) \
MU_DO_666(MACRO, __VA_ARGS__)


#define MU_DO_668(MACRO, ...) \
MACRO(668, __VA_ARGS__) \
MU_DO_667(MACRO, __VA_ARGS__)


#define MU_DO_669(MACRO, ...) \
MACRO(669, __VA_ARGS__) \
MU_DO_668(MACRO, __VA_ARGS__)


#define MU_DO_670(MACRO, ...) \
MACRO(670, __VA_ARGS__) \
MU_DO_669(MACRO, __VA_ARGS__)


#define MU_DO_671(MACRO, ...) \
MACRO(671, __VA_ARGS__) \
MU_DO_670(MACRO, __VA_ARGS__)


#define MU_DO_672(MACRO, ...) \
MACRO(672, __VA_ARGS__) \
MU_DO_671(MACRO, __VA_ARGS__)


#define MU_DO_673(MACRO, ...) \
MACRO(673, __VA_ARGS__) \
MU_DO_672(MACRO, __VA_ARGS__)


#define MU_DO_674(MACRO, ...) \
MACRO(674, __VA_ARGS__) \
MU_DO_673(MACRO, __VA_ARGS__)


#define MU_DO_675(MACRO, ...) \
MACRO(675, __VA_ARGS__) \
MU_DO_674(MACRO, __VA_ARGS__)


#define MU_DO_676(MACRO, ...) \
MACRO(676, __VA_ARGS__) \
MU_DO_675(MACRO, __VA_ARGS__)


#define MU_DO_677(MACRO, ...) \
MACRO(677, __VA_ARGS__) \
MU_DO_676(MACRO, __VA_ARGS__)


#define MU_DO_678(MACRO, ...) \
MACRO(678, __VA_ARGS__) \
MU_DO_677(MACRO, __VA_ARGS__)


#define MU_DO_679(MACRO, ...) \
MACRO(679, __VA_ARGS__) \
MU_DO_678(MACRO, __VA_ARGS__)


#define MU_DO_680(MACRO, ...) \
MACRO(680, __VA_ARGS__) \
MU_DO_679(MACRO, __VA_ARGS__)


#define MU_DO_681(MACRO, ...) \
MACRO(681, __VA_ARGS__) \
MU_DO_680(MACRO, __VA_ARGS__)


#define MU_DO_682(MACRO, ...) \
MACRO(682, __VA_ARGS__) \
MU_DO_681(MACRO, __VA_ARGS__)


#define MU_DO_683(MACRO, ...) \
MACRO(683, __VA_ARGS__) \
MU_DO_682(MACRO, __VA_ARGS__)


#define MU_DO_684(MACRO, ...) \
MACRO(684, __VA_ARGS__) \
MU_DO_683(MACRO, __VA_ARGS__)


#define MU_DO_685(MACRO, ...) \
MACRO(685, __VA_ARGS__) \
MU_DO_684(MACRO, __VA_ARGS__)


#define MU_DO_686(MACRO, ...) \
MACRO(686, __VA_ARGS__) \
MU_DO_685(MACRO, __VA_ARGS__)


#define MU_DO_687(MACRO, ...) \
MACRO(687, __VA_ARGS__) \
MU_DO_686(MACRO, __VA_ARGS__)


#define MU_DO_688(MACRO, ...) \
MACRO(688, __VA_ARGS__) \
MU_DO_687(MACRO, __VA_ARGS__)


#define MU_DO_689(MACRO, ...) \
MACRO(689, __VA_ARGS__) \
MU_DO_688(MACRO, __VA_ARGS__)


#define MU_DO_690(MACRO, ...) \
MACRO(690, __VA_ARGS__) \
MU_DO_689(MACRO, __VA_ARGS__)


#define MU_DO_691(MACRO, ...) \
MACRO(691, __VA_ARGS__) \
MU_DO_690(MACRO, __VA_ARGS__)


#define MU_DO_692(MACRO, ...) \
MACRO(692, __VA_ARGS__) \
MU_DO_691(MACRO, __VA_ARGS__)


#define MU_DO_693(MACRO, ...) \
MACRO(693, __VA_ARGS__) \
MU_DO_692(MACRO, __VA_ARGS__)


#define MU_DO_694(MACRO, ...) \
MACRO(694, __VA_ARGS__) \
MU_DO_693(MACRO, __VA_ARGS__)


#define MU_DO_695(MACRO, ...) \
MACRO(695, __VA_ARGS__) \
MU_DO_694(MACRO, __VA_ARGS__)


#define MU_DO_696(MACRO, ...) \
MACRO(696, __VA_ARGS__) \
MU_DO_695(MACRO, __VA_ARGS__)


#define MU_DO_697(MACRO, ...) \
MACRO(697, __VA_ARGS__) \
MU_DO_696(MACRO, __VA_ARGS__)


#define MU_DO_698(MACRO, ...) \
MACRO(698, __VA_ARGS__) \
MU_DO_697(MACRO, __VA_ARGS__)


#define MU_DO_699(MACRO, ...) \
MACRO(699, __VA_ARGS__) \
MU_DO_698(MACRO, __VA_ARGS__)


#define MU_DO_700(MACRO, ...) \
MACRO(700, __VA_ARGS__) \
MU_DO_699(MACRO, __VA_ARGS__)


#define MU_DO_701(MACRO, ...) \
MACRO(701, __VA_ARGS__) \
MU_DO_700(MACRO, __VA_ARGS__)


#define MU_DO_702(MACRO, ...) \
MACRO(702, __VA_ARGS__) \
MU_DO_701(MACRO, __VA_ARGS__)


#define MU_DO_703(MACRO, ...) \
MACRO(703, __VA_ARGS__) \
MU_DO_702(MACRO, __VA_ARGS__)


#define MU_DO_704(MACRO, ...) \
MACRO(704, __VA_ARGS__) \
MU_DO_703(MACRO, __VA_ARGS__)


#define MU_DO_705(MACRO, ...) \
MACRO(705, __VA_ARGS__) \
MU_DO_704(MACRO, __VA_ARGS__)


#define MU_DO_706(MACRO, ...) \
MACRO(706, __VA_ARGS__) \
MU_DO_705(MACRO, __VA_ARGS__)


#define MU_DO_707(MACRO, ...) \
MACRO(707, __VA_ARGS__) \
MU_DO_706(MACRO, __VA_ARGS__)


#define MU_DO_708(MACRO, ...) \
MACRO(708, __VA_ARGS__) \
MU_DO_707(MACRO, __VA_ARGS__)


#define MU_DO_709(MACRO, ...) \
MACRO(709, __VA_ARGS__) \
MU_DO_708(MACRO, __VA_ARGS__)


#define MU_DO_710(MACRO, ...) \
MACRO(710, __VA_ARGS__) \
MU_DO_709(MACRO, __VA_ARGS__)


#define MU_DO_711(MACRO, ...) \
MACRO(711, __VA_ARGS__) \
MU_DO_710(MACRO, __VA_ARGS__)


#define MU_DO_712(MACRO, ...) \
MACRO(712, __VA_ARGS__) \
MU_DO_711(MACRO, __VA_ARGS__)


#define MU_DO_713(MACRO, ...) \
MACRO(713, __VA_ARGS__) \
MU_DO_712(MACRO, __VA_ARGS__)


#define MU_DO_714(MACRO, ...) \
MACRO(714, __VA_ARGS__) \
MU_DO_713(MACRO, __VA_ARGS__)


#define MU_DO_715(MACRO, ...) \
MACRO(715, __VA_ARGS__) \
MU_DO_714(MACRO, __VA_ARGS__)


#define MU_DO_716(MACRO, ...) \
MACRO(716, __VA_ARGS__) \
MU_DO_715(MACRO, __VA_ARGS__)


#define MU_DO_717(MACRO, ...) \
MACRO(717, __VA_ARGS__) \
MU_DO_716(MACRO, __VA_ARGS__)


#define MU_DO_718(MACRO, ...) \
MACRO(718, __VA_ARGS__) \
MU_DO_717(MACRO, __VA_ARGS__)


#define MU_DO_719(MACRO, ...) \
MACRO(719, __VA_ARGS__) \
MU_DO_718(MACRO, __VA_ARGS__)


#define MU_DO_720(MACRO, ...) \
MACRO(720, __VA_ARGS__) \
MU_DO_719(MACRO, __VA_ARGS__)


#define MU_DO_721(MACRO, ...) \
MACRO(721, __VA_ARGS__) \
MU_DO_720(MACRO, __VA_ARGS__)


#define MU_DO_722(MACRO, ...) \
MACRO(722, __VA_ARGS__) \
MU_DO_721(MACRO, __VA_ARGS__)


#define MU_DO_723(MACRO, ...) \
MACRO(723, __VA_ARGS__) \
MU_DO_722(MACRO, __VA_ARGS__)


#define MU_DO_724(MACRO, ...) \
MACRO(724, __VA_ARGS__) \
MU_DO_723(MACRO, __VA_ARGS__)


#define MU_DO_725(MACRO, ...) \
MACRO(725, __VA_ARGS__) \
MU_DO_724(MACRO, __VA_ARGS__)


#define MU_DO_726(MACRO, ...) \
MACRO(726, __VA_ARGS__) \
MU_DO_725(MACRO, __VA_ARGS__)


#define MU_DO_727(MACRO, ...) \
MACRO(727, __VA_ARGS__) \
MU_DO_726(MACRO, __VA_ARGS__)


#define MU_DO_728(MACRO, ...) \
MACRO(728, __VA_ARGS__) \
MU_DO_727(MACRO, __VA_ARGS__)


#define MU_DO_729(MACRO, ...) \
MACRO(729, __VA_ARGS__) \
MU_DO_728(MACRO, __VA_ARGS__)


#define MU_DO_730(MACRO, ...) \
MACRO(730, __VA_ARGS__) \
MU_DO_729(MACRO, __VA_ARGS__)


#define MU_DO_731(MACRO, ...) \
MACRO(731, __VA_ARGS__) \
MU_DO_730(MACRO, __VA_ARGS__)


#define MU_DO_732(MACRO, ...) \
MACRO(732, __VA_ARGS__) \
MU_DO_731(MACRO, __VA_ARGS__)


#define MU_DO_733(MACRO, ...) \
MACRO(733, __VA_ARGS__) \
MU_DO_732(MACRO, __VA_ARGS__)


#define MU_DO_734(MACRO, ...) \
MACRO(734, __VA_ARGS__) \
MU_DO_733(MACRO, __VA_ARGS__)


#define MU_DO_735(MACRO, ...) \
MACRO(735, __VA_ARGS__) \
MU_DO_734(MACRO, __VA_ARGS__)


#define MU_DO_736(MACRO, ...) \
MACRO(736, __VA_ARGS__) \
MU_DO_735(MACRO, __VA_ARGS__)


#define MU_DO_737(MACRO, ...) \
MACRO(737, __VA_ARGS__) \
MU_DO_736(MACRO, __VA_ARGS__)


#define MU_DO_738(MACRO, ...) \
MACRO(738, __VA_ARGS__) \
MU_DO_737(MACRO, __VA_ARGS__)


#define MU_DO_739(MACRO, ...) \
MACRO(739, __VA_ARGS__) \
MU_DO_738(MACRO, __VA_ARGS__)


#define MU_DO_740(MACRO, ...) \
MACRO(740, __VA_ARGS__) \
MU_DO_739(MACRO, __VA_ARGS__)


#define MU_DO_741(MACRO, ...) \
MACRO(741, __VA_ARGS__) \
MU_DO_740(MACRO, __VA_ARGS__)


#define MU_DO_742(MACRO, ...) \
MACRO(742, __VA_ARGS__) \
MU_DO_741(MACRO, __VA_ARGS__)


#define MU_DO_743(MACRO, ...) \
MACRO(743, __VA_ARGS__) \
MU_DO_742(MACRO, __VA_ARGS__)


#define MU_DO_744(MACRO, ...) \
MACRO(744, __VA_ARGS__) \
MU_DO_743(MACRO, __VA_ARGS__)


#define MU_DO_745(MACRO, ...) \
MACRO(745, __VA_ARGS__) \
MU_DO_744(MACRO, __VA_ARGS__)


#define MU_DO_746(MACRO, ...) \
MACRO(746, __VA_ARGS__) \
MU_DO_745(MACRO, __VA_ARGS__)


#define MU_DO_747(MACRO, ...) \
MACRO(747, __VA_ARGS__) \
MU_DO_746(MACRO, __VA_ARGS__)


#define MU_DO_748(MACRO, ...) \
MACRO(748, __VA_ARGS__) \
MU_DO_747(MACRO, __VA_ARGS__)


#define MU_DO_749(MACRO, ...) \
MACRO(749, __VA_ARGS__) \
MU_DO_748(MACRO, __VA_ARGS__)


#define MU_DO_750(MACRO, ...) \
MACRO(750, __VA_ARGS__) \
MU_DO_749(MACRO, __VA_ARGS__)


#define MU_DO_751(MACRO, ...) \
MACRO(751, __VA_ARGS__) \
MU_DO_750(MACRO, __VA_ARGS__)


#define MU_DO_752(MACRO, ...) \
MACRO(752, __VA_ARGS__) \
MU_DO_751(MACRO, __VA_ARGS__)


#define MU_DO_753(MACRO, ...) \
MACRO(753, __VA_ARGS__) \
MU_DO_752(MACRO, __VA_ARGS__)


#define MU_DO_754(MACRO, ...) \
MACRO(754, __VA_ARGS__) \
MU_DO_753(MACRO, __VA_ARGS__)


#define MU_DO_755(MACRO, ...) \
MACRO(755, __VA_ARGS__) \
MU_DO_754(MACRO, __VA_ARGS__)


#define MU_DO_756(MACRO, ...) \
MACRO(756, __VA_ARGS__) \
MU_DO_755(MACRO, __VA_ARGS__)


#define MU_DO_757(MACRO, ...) \
MACRO(757, __VA_ARGS__) \
MU_DO_756(MACRO, __VA_ARGS__)


#define MU_DO_758(MACRO, ...) \
MACRO(758, __VA_ARGS__) \
MU_DO_757(MACRO, __VA_ARGS__)


#define MU_DO_759(MACRO, ...) \
MACRO(759, __VA_ARGS__) \
MU_DO_758(MACRO, __VA_ARGS__)


#define MU_DO_760(MACRO, ...) \
MACRO(760, __VA_ARGS__) \
MU_DO_759(MACRO, __VA_ARGS__)


#define MU_DO_761(MACRO, ...) \
MACRO(761, __VA_ARGS__) \
MU_DO_760(MACRO, __VA_ARGS__)


#define MU_DO_762(MACRO, ...) \
MACRO(762, __VA_ARGS__) \
MU_DO_761(MACRO, __VA_ARGS__)


#define MU_DO_763(MACRO, ...) \
MACRO(763, __VA_ARGS__) \
MU_DO_762(MACRO, __VA_ARGS__)


#define MU_DO_764(MACRO, ...) \
MACRO(764, __VA_ARGS__) \
MU_DO_763(MACRO, __VA_ARGS__)


#define MU_DO_765(MACRO, ...) \
MACRO(765, __VA_ARGS__) \
MU_DO_764(MACRO, __VA_ARGS__)


#define MU_DO_766(MACRO, ...) \
MACRO(766, __VA_ARGS__) \
MU_DO_765(MACRO, __VA_ARGS__)


#define MU_DO_767(MACRO, ...) \
MACRO(767, __VA_ARGS__) \
MU_DO_766(MACRO, __VA_ARGS__)


#define MU_DO_768(MACRO, ...) \
MACRO(768, __VA_ARGS__) \
MU_DO_767(MACRO, __VA_ARGS__)


#define MU_DO_769(MACRO, ...) \
MACRO(769, __VA_ARGS__) \
MU_DO_768(MACRO, __VA_ARGS__)


#define MU_DO_770(MACRO, ...) \
MACRO(770, __VA_ARGS__) \
MU_DO_769(MACRO, __VA_ARGS__)


#define MU_DO_771(MACRO, ...) \
MACRO(771, __VA_ARGS__) \
MU_DO_770(MACRO, __VA_ARGS__)


#define MU_DO_772(MACRO, ...) \
MACRO(772, __VA_ARGS__) \
MU_DO_771(MACRO, __VA_ARGS__)


#define MU_DO_773(MACRO, ...) \
MACRO(773, __VA_ARGS__) \
MU_DO_772(MACRO, __VA_ARGS__)


#define MU_DO_774(MACRO, ...) \
MACRO(774, __VA_ARGS__) \
MU_DO_773(MACRO, __VA_ARGS__)


#define MU_DO_775(MACRO, ...) \
MACRO(775, __VA_ARGS__) \
MU_DO_774(MACRO, __VA_ARGS__)


#define MU_DO_776(MACRO, ...) \
MACRO(776, __VA_ARGS__) \
MU_DO_775(MACRO, __VA_ARGS__)


#define MU_DO_777(MACRO, ...) \
MACRO(777, __VA_ARGS__) \
MU_DO_776(MACRO, __VA_ARGS__)


#define MU_DO_778(MACRO, ...) \
MACRO(778, __VA_ARGS__) \
MU_DO_777(MACRO, __VA_ARGS__)


#define MU_DO_779(MACRO, ...) \
MACRO(779, __VA_ARGS__) \
MU_DO_778(MACRO, __VA_ARGS__)


#define MU_DO_780(MACRO, ...) \
MACRO(780, __VA_ARGS__) \
MU_DO_779(MACRO, __VA_ARGS__)


#define MU_DO_781(MACRO, ...) \
MACRO(781, __VA_ARGS__) \
MU_DO_780(MACRO, __VA_ARGS__)


#define MU_DO_782(MACRO, ...) \
MACRO(782, __VA_ARGS__) \
MU_DO_781(MACRO, __VA_ARGS__)


#define MU_DO_783(MACRO, ...) \
MACRO(783, __VA_ARGS__) \
MU_DO_782(MACRO, __VA_ARGS__)


#define MU_DO_784(MACRO, ...) \
MACRO(784, __VA_ARGS__) \
MU_DO_783(MACRO, __VA_ARGS__)


#define MU_DO_785(MACRO, ...) \
MACRO(785, __VA_ARGS__) \
MU_DO_784(MACRO, __VA_ARGS__)


#define MU_DO_786(MACRO, ...) \
MACRO(786, __VA_ARGS__) \
MU_DO_785(MACRO, __VA_ARGS__)


#define MU_DO_787(MACRO, ...) \
MACRO(787, __VA_ARGS__) \
MU_DO_786(MACRO, __VA_ARGS__)


#define MU_DO_788(MACRO, ...) \
MACRO(788, __VA_ARGS__) \
MU_DO_787(MACRO, __VA_ARGS__)


#define MU_DO_789(MACRO, ...) \
MACRO(789, __VA_ARGS__) \
MU_DO_788(MACRO, __VA_ARGS__)


#define MU_DO_790(MACRO, ...) \
MACRO(790, __VA_ARGS__) \
MU_DO_789(MACRO, __VA_ARGS__)


#define MU_DO_791(MACRO, ...) \
MACRO(791, __VA_ARGS__) \
MU_DO_790(MACRO, __VA_ARGS__)


#define MU_DO_792(MACRO, ...) \
MACRO(792, __VA_ARGS__) \
MU_DO_791(MACRO, __VA_ARGS__)


#define MU_DO_793(MACRO, ...) \
MACRO(793, __VA_ARGS__) \
MU_DO_792(MACRO, __VA_ARGS__)


#define MU_DO_794(MACRO, ...) \
MACRO(794, __VA_ARGS__) \
MU_DO_793(MACRO, __VA_ARGS__)


#define MU_DO_795(MACRO, ...) \
MACRO(795, __VA_ARGS__) \
MU_DO_794(MACRO, __VA_ARGS__)


#define MU_DO_796(MACRO, ...) \
MACRO(796, __VA_ARGS__) \
MU_DO_795(MACRO, __VA_ARGS__)


#define MU_DO_797(MACRO, ...) \
MACRO(797, __VA_ARGS__) \
MU_DO_796(MACRO, __VA_ARGS__)


#define MU_DO_798(MACRO, ...) \
MACRO(798, __VA_ARGS__) \
MU_DO_797(MACRO, __VA_ARGS__)


#define MU_DO_799(MACRO, ...) \
MACRO(799, __VA_ARGS__) \
MU_DO_798(MACRO, __VA_ARGS__)


#define MU_DO_800(MACRO, ...) \
MACRO(800, __VA_ARGS__) \
MU_DO_799(MACRO, __VA_ARGS__)


#define MU_DO_801(MACRO, ...) \
MACRO(801, __VA_ARGS__) \
MU_DO_800(MACRO, __VA_ARGS__)


#define MU_DO_802(MACRO, ...) \
MACRO(802, __VA_ARGS__) \
MU_DO_801(MACRO, __VA_ARGS__)


#define MU_DO_803(MACRO, ...) \
MACRO(803, __VA_ARGS__) \
MU_DO_802(MACRO, __VA_ARGS__)


#define MU_DO_804(MACRO, ...) \
MACRO(804, __VA_ARGS__) \
MU_DO_803(MACRO, __VA_ARGS__)


#define MU_DO_805(MACRO, ...) \
MACRO(805, __VA_ARGS__) \
MU_DO_804(MACRO, __VA_ARGS__)


#define MU_DO_806(MACRO, ...) \
MACRO(806, __VA_ARGS__) \
MU_DO_805(MACRO, __VA_ARGS__)


#define MU_DO_807(MACRO, ...) \
MACRO(807, __VA_ARGS__) \
MU_DO_806(MACRO, __VA_ARGS__)


#define MU_DO_808(MACRO, ...) \
MACRO(808, __VA_ARGS__) \
MU_DO_807(MACRO, __VA_ARGS__)


#define MU_DO_809(MACRO, ...) \
MACRO(809, __VA_ARGS__) \
MU_DO_808(MACRO, __VA_ARGS__)


#define MU_DO_810(MACRO, ...) \
MACRO(810, __VA_ARGS__) \
MU_DO_809(MACRO, __VA_ARGS__)


#define MU_DO_811(MACRO, ...) \
MACRO(811, __VA_ARGS__) \
MU_DO_810(MACRO, __VA_ARGS__)


#define MU_DO_812(MACRO, ...) \
MACRO(812, __VA_ARGS__) \
MU_DO_811(MACRO, __VA_ARGS__)


#define MU_DO_813(MACRO, ...) \
MACRO(813, __VA_ARGS__) \
MU_DO_812(MACRO, __VA_ARGS__)


#define MU_DO_814(MACRO, ...) \
MACRO(814, __VA_ARGS__) \
MU_DO_813(MACRO, __VA_ARGS__)


#define MU_DO_815(MACRO, ...) \
MACRO(815, __VA_ARGS__) \
MU_DO_814(MACRO, __VA_ARGS__)


#define MU_DO_816(MACRO, ...) \
MACRO(816, __VA_ARGS__) \
MU_DO_815(MACRO, __VA_ARGS__)


#define MU_DO_817(MACRO, ...) \
MACRO(817, __VA_ARGS__) \
MU_DO_816(MACRO, __VA_ARGS__)


#define MU_DO_818(MACRO, ...) \
MACRO(818, __VA_ARGS__) \
MU_DO_817(MACRO, __VA_ARGS__)


#define MU_DO_819(MACRO, ...) \
MACRO(819, __VA_ARGS__) \
MU_DO_818(MACRO, __VA_ARGS__)


#define MU_DO_820(MACRO, ...) \
MACRO(820, __VA_ARGS__) \
MU_DO_819(MACRO, __VA_ARGS__)


#define MU_DO_821(MACRO, ...) \
MACRO(821, __VA_ARGS__) \
MU_DO_820(MACRO, __VA_ARGS__)


#define MU_DO_822(MACRO, ...) \
MACRO(822, __VA_ARGS__) \
MU_DO_821(MACRO, __VA_ARGS__)


#define MU_DO_823(MACRO, ...) \
MACRO(823, __VA_ARGS__) \
MU_DO_822(MACRO, __VA_ARGS__)


#define MU_DO_824(MACRO, ...) \
MACRO(824, __VA_ARGS__) \
MU_DO_823(MACRO, __VA_ARGS__)


#define MU_DO_825(MACRO, ...) \
MACRO(825, __VA_ARGS__) \
MU_DO_824(MACRO, __VA_ARGS__)


#define MU_DO_826(MACRO, ...) \
MACRO(826, __VA_ARGS__) \
MU_DO_825(MACRO, __VA_ARGS__)


#define MU_DO_827(MACRO, ...) \
MACRO(827, __VA_ARGS__) \
MU_DO_826(MACRO, __VA_ARGS__)


#define MU_DO_828(MACRO, ...) \
MACRO(828, __VA_ARGS__) \
MU_DO_827(MACRO, __VA_ARGS__)


#define MU_DO_829(MACRO, ...) \
MACRO(829, __VA_ARGS__) \
MU_DO_828(MACRO, __VA_ARGS__)


#define MU_DO_830(MACRO, ...) \
MACRO(830, __VA_ARGS__) \
MU_DO_829(MACRO, __VA_ARGS__)


#define MU_DO_831(MACRO, ...) \
MACRO(831, __VA_ARGS__) \
MU_DO_830(MACRO, __VA_ARGS__)


#define MU_DO_832(MACRO, ...) \
MACRO(832, __VA_ARGS__) \
MU_DO_831(MACRO, __VA_ARGS__)


#define MU_DO_833(MACRO, ...) \
MACRO(833, __VA_ARGS__) \
MU_DO_832(MACRO, __VA_ARGS__)


#define MU_DO_834(MACRO, ...) \
MACRO(834, __VA_ARGS__) \
MU_DO_833(MACRO, __VA_ARGS__)


#define MU_DO_835(MACRO, ...) \
MACRO(835, __VA_ARGS__) \
MU_DO_834(MACRO, __VA_ARGS__)


#define MU_DO_836(MACRO, ...) \
MACRO(836, __VA_ARGS__) \
MU_DO_835(MACRO, __VA_ARGS__)


#define MU_DO_837(MACRO, ...) \
MACRO(837, __VA_ARGS__) \
MU_DO_836(MACRO, __VA_ARGS__)


#define MU_DO_838(MACRO, ...) \
MACRO(838, __VA_ARGS__) \
MU_DO_837(MACRO, __VA_ARGS__)


#define MU_DO_839(MACRO, ...) \
MACRO(839, __VA_ARGS__) \
MU_DO_838(MACRO, __VA_ARGS__)


#define MU_DO_840(MACRO, ...) \
MACRO(840, __VA_ARGS__) \
MU_DO_839(MACRO, __VA_ARGS__)


#define MU_DO_841(MACRO, ...) \
MACRO(841, __VA_ARGS__) \
MU_DO_840(MACRO, __VA_ARGS__)


#define MU_DO_842(MACRO, ...) \
MACRO(842, __VA_ARGS__) \
MU_DO_841(MACRO, __VA_ARGS__)


#define MU_DO_843(MACRO, ...) \
MACRO(843, __VA_ARGS__) \
MU_DO_842(MACRO, __VA_ARGS__)


#define MU_DO_844(MACRO, ...) \
MACRO(844, __VA_ARGS__) \
MU_DO_843(MACRO, __VA_ARGS__)


#define MU_DO_845(MACRO, ...) \
MACRO(845, __VA_ARGS__) \
MU_DO_844(MACRO, __VA_ARGS__)


#define MU_DO_846(MACRO, ...) \
MACRO(846, __VA_ARGS__) \
MU_DO_845(MACRO, __VA_ARGS__)


#define MU_DO_847(MACRO, ...) \
MACRO(847, __VA_ARGS__) \
MU_DO_846(MACRO, __VA_ARGS__)


#define MU_DO_848(MACRO, ...) \
MACRO(848, __VA_ARGS__) \
MU_DO_847(MACRO, __VA_ARGS__)


#define MU_DO_849(MACRO, ...) \
MACRO(849, __VA_ARGS__) \
MU_DO_848(MACRO, __VA_ARGS__)


#define MU_DO_850(MACRO, ...) \
MACRO(850, __VA_ARGS__) \
MU_DO_849(MACRO, __VA_ARGS__)


#define MU_DO_851(MACRO, ...) \
MACRO(851, __VA_ARGS__) \
MU_DO_850(MACRO, __VA_ARGS__)


#define MU_DO_852(MACRO, ...) \
MACRO(852, __VA_ARGS__) \
MU_DO_851(MACRO, __VA_ARGS__)


#define MU_DO_853(MACRO, ...) \
MACRO(853, __VA_ARGS__) \
MU_DO_852(MACRO, __VA_ARGS__)


#define MU_DO_854(MACRO, ...) \
MACRO(854, __VA_ARGS__) \
MU_DO_853(MACRO, __VA_ARGS__)


#define MU_DO_855(MACRO, ...) \
MACRO(855, __VA_ARGS__) \
MU_DO_854(MACRO, __VA_ARGS__)


#define MU_DO_856(MACRO, ...) \
MACRO(856, __VA_ARGS__) \
MU_DO_855(MACRO, __VA_ARGS__)


#define MU_DO_857(MACRO, ...) \
MACRO(857, __VA_ARGS__) \
MU_DO_856(MACRO, __VA_ARGS__)


#define MU_DO_858(MACRO, ...) \
MACRO(858, __VA_ARGS__) \
MU_DO_857(MACRO, __VA_ARGS__)


#define MU_DO_859(MACRO, ...) \
MACRO(859, __VA_ARGS__) \
MU_DO_858(MACRO, __VA_ARGS__)


#define MU_DO_860(MACRO, ...) \
MACRO(860, __VA_ARGS__) \
MU_DO_859(MACRO, __VA_ARGS__)


#define MU_DO_861(MACRO, ...) \
MACRO(861, __VA_ARGS__) \
MU_DO_860(MACRO, __VA_ARGS__)


#define MU_DO_862(MACRO, ...) \
MACRO(862, __VA_ARGS__) \
MU_DO_861(MACRO, __VA_ARGS__)


#define MU_DO_863(MACRO, ...) \
MACRO(863, __VA_ARGS__) \
MU_DO_862(MACRO, __VA_ARGS__)


#define MU_DO_864(MACRO, ...) \
MACRO(864, __VA_ARGS__) \
MU_DO_863(MACRO, __VA_ARGS__)


#define MU_DO_865(MACRO, ...) \
MACRO(865, __VA_ARGS__) \
MU_DO_864(MACRO, __VA_ARGS__)


#define MU_DO_866(MACRO, ...) \
MACRO(866, __VA_ARGS__) \
MU_DO_865(MACRO, __VA_ARGS__)


#define MU_DO_867(MACRO, ...) \
MACRO(867, __VA_ARGS__) \
MU_DO_866(MACRO, __VA_ARGS__)


#define MU_DO_868(MACRO, ...) \
MACRO(868, __VA_ARGS__) \
MU_DO_867(MACRO, __VA_ARGS__)


#define MU_DO_869(MACRO, ...) \
MACRO(869, __VA_ARGS__) \
MU_DO_868(MACRO, __VA_ARGS__)


#define MU_DO_870(MACRO, ...) \
MACRO(870, __VA_ARGS__) \
MU_DO_869(MACRO, __VA_ARGS__)


#define MU_DO_871(MACRO, ...) \
MACRO(871, __VA_ARGS__) \
MU_DO_870(MACRO, __VA_ARGS__)


#define MU_DO_872(MACRO, ...) \
MACRO(872, __VA_ARGS__) \
MU_DO_871(MACRO, __VA_ARGS__)


#define MU_DO_873(MACRO, ...) \
MACRO(873, __VA_ARGS__) \
MU_DO_872(MACRO, __VA_ARGS__)


#define MU_DO_874(MACRO, ...) \
MACRO(874, __VA_ARGS__) \
MU_DO_873(MACRO, __VA_ARGS__)


#define MU_DO_875(MACRO, ...) \
MACRO(875, __VA_ARGS__) \
MU_DO_874(MACRO, __VA_ARGS__)


#define MU_DO_876(MACRO, ...) \
MACRO(876, __VA_ARGS__) \
MU_DO_875(MACRO, __VA_ARGS__)


#define MU_DO_877(MACRO, ...) \
MACRO(877, __VA_ARGS__) \
MU_DO_876(MACRO, __VA_ARGS__)


#define MU_DO_878(MACRO, ...) \
MACRO(878, __VA_ARGS__) \
MU_DO_877(MACRO, __VA_ARGS__)


#define MU_DO_879(MACRO, ...) \
MACRO(879, __VA_ARGS__) \
MU_DO_878(MACRO, __VA_ARGS__)


#define MU_DO_880(MACRO, ...) \
MACRO(880, __VA_ARGS__) \
MU_DO_879(MACRO, __VA_ARGS__)


#define MU_DO_881(MACRO, ...) \
MACRO(881, __VA_ARGS__) \
MU_DO_880(MACRO, __VA_ARGS__)


#define MU_DO_882(MACRO, ...) \
MACRO(882, __VA_ARGS__) \
MU_DO_881(MACRO, __VA_ARGS__)


#define MU_DO_883(MACRO, ...) \
MACRO(883, __VA_ARGS__) \
MU_DO_882(MACRO, __VA_ARGS__)


#define MU_DO_884(MACRO, ...) \
MACRO(884, __VA_ARGS__) \
MU_DO_883(MACRO, __VA_ARGS__)


#define MU_DO_885(MACRO, ...) \
MACRO(885, __VA_ARGS__) \
MU_DO_884(MACRO, __VA_ARGS__)


#define MU_DO_886(MACRO, ...) \
MACRO(886, __VA_ARGS__) \
MU_DO_885(MACRO, __VA_ARGS__)


#define MU_DO_887(MACRO, ...) \
MACRO(887, __VA_ARGS__) \
MU_DO_886(MACRO, __VA_ARGS__)


#define MU_DO_888(MACRO, ...) \
MACRO(888, __VA_ARGS__) \
MU_DO_887(MACRO, __VA_ARGS__)


#define MU_DO_889(MACRO, ...) \
MACRO(889, __VA_ARGS__) \
MU_DO_888(MACRO, __VA_ARGS__)


#define MU_DO_890(MACRO, ...) \
MACRO(890, __VA_ARGS__) \
MU_DO_889(MACRO, __VA_ARGS__)


#define MU_DO_891(MACRO, ...) \
MACRO(891, __VA_ARGS__) \
MU_DO_890(MACRO, __VA_ARGS__)


#define MU_DO_892(MACRO, ...) \
MACRO(892, __VA_ARGS__) \
MU_DO_891(MACRO, __VA_ARGS__)


#define MU_DO_893(MACRO, ...) \
MACRO(893, __VA_ARGS__) \
MU_DO_892(MACRO, __VA_ARGS__)


#define MU_DO_894(MACRO, ...) \
MACRO(894, __VA_ARGS__) \
MU_DO_893(MACRO, __VA_ARGS__)


#define MU_DO_895(MACRO, ...) \
MACRO(895, __VA_ARGS__) \
MU_DO_894(MACRO, __VA_ARGS__)


#define MU_DO_896(MACRO, ...) \
MACRO(896, __VA_ARGS__) \
MU_DO_895(MACRO, __VA_ARGS__)


#define MU_DO_897(MACRO, ...) \
MACRO(897, __VA_ARGS__) \
MU_DO_896(MACRO, __VA_ARGS__)


#define MU_DO_898(MACRO, ...) \
MACRO(898, __VA_ARGS__) \
MU_DO_897(MACRO, __VA_ARGS__)


#define MU_DO_899(MACRO, ...) \
MACRO(899, __VA_ARGS__) \
MU_DO_898(MACRO, __VA_ARGS__)


#define MU_DO_900(MACRO, ...) \
MACRO(900, __VA_ARGS__) \
MU_DO_899(MACRO, __VA_ARGS__)


#define MU_DO_901(MACRO, ...) \
MACRO(901, __VA_ARGS__) \
MU_DO_900(MACRO, __VA_ARGS__)


#define MU_DO_902(MACRO, ...) \
MACRO(902, __VA_ARGS__) \
MU_DO_901(MACRO, __VA_ARGS__)


#define MU_DO_903(MACRO, ...) \
MACRO(903, __VA_ARGS__) \
MU_DO_902(MACRO, __VA_ARGS__)


#define MU_DO_904(MACRO, ...) \
MACRO(904, __VA_ARGS__) \
MU_DO_903(MACRO, __VA_ARGS__)


#define MU_DO_905(MACRO, ...) \
MACRO(905, __VA_ARGS__) \
MU_DO_904(MACRO, __VA_ARGS__)


#define MU_DO_906(MACRO, ...) \
MACRO(906, __VA_ARGS__) \
MU_DO_905(MACRO, __VA_ARGS__)


#define MU_DO_907(MACRO, ...) \
MACRO(907, __VA_ARGS__) \
MU_DO_906(MACRO, __VA_ARGS__)


#define MU_DO_908(MACRO, ...) \
MACRO(908, __VA_ARGS__) \
MU_DO_907(MACRO, __VA_ARGS__)


#define MU_DO_909(MACRO, ...) \
MACRO(909, __VA_ARGS__) \
MU_DO_908(MACRO, __VA_ARGS__)


#define MU_DO_910(MACRO, ...) \
MACRO(910, __VA_ARGS__) \
MU_DO_909(MACRO, __VA_ARGS__)


#define MU_DO_911(MACRO, ...) \
MACRO(911, __VA_ARGS__) \
MU_DO_910(MACRO, __VA_ARGS__)


#define MU_DO_912(MACRO, ...) \
MACRO(912, __VA_ARGS__) \
MU_DO_911(MACRO, __VA_ARGS__)


#define MU_DO_913(MACRO, ...) \
MACRO(913, __VA_ARGS__) \
MU_DO_912(MACRO, __VA_ARGS__)


#define MU_DO_914(MACRO, ...) \
MACRO(914, __VA_ARGS__) \
MU_DO_913(MACRO, __VA_ARGS__)


#define MU_DO_915(MACRO, ...) \
MACRO(915, __VA_ARGS__) \
MU_DO_914(MACRO, __VA_ARGS__)


#define MU_DO_916(MACRO, ...) \
MACRO(916, __VA_ARGS__) \
MU_DO_915(MACRO, __VA_ARGS__)


#define MU_DO_917(MACRO, ...) \
MACRO(917, __VA_ARGS__) \
MU_DO_916(MACRO, __VA_ARGS__)


#define MU_DO_918(MACRO, ...) \
MACRO(918, __VA_ARGS__) \
MU_DO_917(MACRO, __VA_ARGS__)


#define MU_DO_919(MACRO, ...) \
MACRO(919, __VA_ARGS__) \
MU_DO_918(MACRO, __VA_ARGS__)


#define MU_DO_920(MACRO, ...) \
MACRO(920, __VA_ARGS__) \
MU_DO_919(MACRO, __VA_ARGS__)


#define MU_DO_921(MACRO, ...) \
MACRO(921, __VA_ARGS__) \
MU_DO_920(MACRO, __VA_ARGS__)


#define MU_DO_922(MACRO, ...) \
MACRO(922, __VA_ARGS__) \
MU_DO_921(MACRO, __VA_ARGS__)


#define MU_DO_923(MACRO, ...) \
MACRO(923, __VA_ARGS__) \
MU_DO_922(MACRO, __VA_ARGS__)


#define MU_DO_924(MACRO, ...) \
MACRO(924, __VA_ARGS__) \
MU_DO_923(MACRO, __VA_ARGS__)


#define MU_DO_925(MACRO, ...) \
MACRO(925, __VA_ARGS__) \
MU_DO_924(MACRO, __VA_ARGS__)


#define MU_DO_926(MACRO, ...) \
MACRO(926, __VA_ARGS__) \
MU_DO_925(MACRO, __VA_ARGS__)


#define MU_DO_927(MACRO, ...) \
MACRO(927, __VA_ARGS__) \
MU_DO_926(MACRO, __VA_ARGS__)


#define MU_DO_928(MACRO, ...) \
MACRO(928, __VA_ARGS__) \
MU_DO_927(MACRO, __VA_ARGS__)


#define MU_DO_929(MACRO, ...) \
MACRO(929, __VA_ARGS__) \
MU_DO_928(MACRO, __VA_ARGS__)


#define MU_DO_930(MACRO, ...) \
MACRO(930, __VA_ARGS__) \
MU_DO_929(MACRO, __VA_ARGS__)


#define MU_DO_931(MACRO, ...) \
MACRO(931, __VA_ARGS__) \
MU_DO_930(MACRO, __VA_ARGS__)


#define MU_DO_932(MACRO, ...) \
MACRO(932, __VA_ARGS__) \
MU_DO_931(MACRO, __VA_ARGS__)


#define MU_DO_933(MACRO, ...) \
MACRO(933, __VA_ARGS__) \
MU_DO_932(MACRO, __VA_ARGS__)


#define MU_DO_934(MACRO, ...) \
MACRO(934, __VA_ARGS__) \
MU_DO_933(MACRO, __VA_ARGS__)


#define MU_DO_935(MACRO, ...) \
MACRO(935, __VA_ARGS__) \
MU_DO_934(MACRO, __VA_ARGS__)


#define MU_DO_936(MACRO, ...) \
MACRO(936, __VA_ARGS__) \
MU_DO_935(MACRO, __VA_ARGS__)


#define MU_DO_937(MACRO, ...) \
MACRO(937, __VA_ARGS__) \
MU_DO_936(MACRO, __VA_ARGS__)


#define MU_DO_938(MACRO, ...) \
MACRO(938, __VA_ARGS__) \
MU_DO_937(MACRO, __VA_ARGS__)


#define MU_DO_939(MACRO, ...) \
MACRO(939, __VA_ARGS__) \
MU_DO_938(MACRO, __VA_ARGS__)


#define MU_DO_940(MACRO, ...) \
MACRO(940, __VA_ARGS__) \
MU_DO_939(MACRO, __VA_ARGS__)


#define MU_DO_941(MACRO, ...) \
MACRO(941, __VA_ARGS__) \
MU_DO_940(MACRO, __VA_ARGS__)


#define MU_DO_942(MACRO, ...) \
MACRO(942, __VA_ARGS__) \
MU_DO_941(MACRO, __VA_ARGS__)


#define MU_DO_943(MACRO, ...) \
MACRO(943, __VA_ARGS__) \
MU_DO_942(MACRO, __VA_ARGS__)


#define MU_DO_944(MACRO, ...) \
MACRO(944, __VA_ARGS__) \
MU_DO_943(MACRO, __VA_ARGS__)


#define MU_DO_945(MACRO, ...) \
MACRO(945, __VA_ARGS__) \
MU_DO_944(MACRO, __VA_ARGS__)


#define MU_DO_946(MACRO, ...) \
MACRO(946, __VA_ARGS__) \
MU_DO_945(MACRO, __VA_ARGS__)


#define MU_DO_947(MACRO, ...) \
MACRO(947, __VA_ARGS__) \
MU_DO_946(MACRO, __VA_ARGS__)


#define MU_DO_948(MACRO, ...) \
MACRO(948, __VA_ARGS__) \
MU_DO_947(MACRO, __VA_ARGS__)


#define MU_DO_949(MACRO, ...) \
MACRO(949, __VA_ARGS__) \
MU_DO_948(MACRO, __VA_ARGS__)


#define MU_DO_950(MACRO, ...) \
MACRO(950, __VA_ARGS__) \
MU_DO_949(MACRO, __VA_ARGS__)


#define MU_DO_951(MACRO, ...) \
MACRO(951, __VA_ARGS__) \
MU_DO_950(MACRO, __VA_ARGS__)


#define MU_DO_952(MACRO, ...) \
MACRO(952, __VA_ARGS__) \
MU_DO_951(MACRO, __VA_ARGS__)


#define MU_DO_953(MACRO, ...) \
MACRO(953, __VA_ARGS__) \
MU_DO_952(MACRO, __VA_ARGS__)


#define MU_DO_954(MACRO, ...) \
MACRO(954, __VA_ARGS__) \
MU_DO_953(MACRO, __VA_ARGS__)


#define MU_DO_955(MACRO, ...) \
MACRO(955, __VA_ARGS__) \
MU_DO_954(MACRO, __VA_ARGS__)


#define MU_DO_956(MACRO, ...) \
MACRO(956, __VA_ARGS__) \
MU_DO_955(MACRO, __VA_ARGS__)


#define MU_DO_957(MACRO, ...) \
MACRO(957, __VA_ARGS__) \
MU_DO_956(MACRO, __VA_ARGS__)


#define MU_DO_958(MACRO, ...) \
MACRO(958, __VA_ARGS__) \
MU_DO_957(MACRO, __VA_ARGS__)


#define MU_DO_959(MACRO, ...) \
MACRO(959, __VA_ARGS__) \
MU_DO_958(MACRO, __VA_ARGS__)


#define MU_DO_960(MACRO, ...) \
MACRO(960, __VA_ARGS__) \
MU_DO_959(MACRO, __VA_ARGS__)


#define MU_DO_961(MACRO, ...) \
MACRO(961, __VA_ARGS__) \
MU_DO_960(MACRO, __VA_ARGS__)


#define MU_DO_962(MACRO, ...) \
MACRO(962, __VA_ARGS__) \
MU_DO_961(MACRO, __VA_ARGS__)


#define MU_DO_963(MACRO, ...) \
MACRO(963, __VA_ARGS__) \
MU_DO_962(MACRO, __VA_ARGS__)


#define MU_DO_964(MACRO, ...) \
MACRO(964, __VA_ARGS__) \
MU_DO_963(MACRO, __VA_ARGS__)


#define MU_DO_965(MACRO, ...) \
MACRO(965, __VA_ARGS__) \
MU_DO_964(MACRO, __VA_ARGS__)


#define MU_DO_966(MACRO, ...) \
MACRO(966, __VA_ARGS__) \
MU_DO_965(MACRO, __VA_ARGS__)


#define MU_DO_967(MACRO, ...) \
MACRO(967, __VA_ARGS__) \
MU_DO_966(MACRO, __VA_ARGS__)


#define MU_DO_968(MACRO, ...) \
MACRO(968, __VA_ARGS__) \
MU_DO_967(MACRO, __VA_ARGS__)


#define MU_DO_969(MACRO, ...) \
MACRO(969, __VA_ARGS__) \
MU_DO_968(MACRO, __VA_ARGS__)


#define MU_DO_970(MACRO, ...) \
MACRO(970, __VA_ARGS__) \
MU_DO_969(MACRO, __VA_ARGS__)


#define MU_DO_971(MACRO, ...) \
MACRO(971, __VA_ARGS__) \
MU_DO_970(MACRO, __VA_ARGS__)


#define MU_DO_972(MACRO, ...) \
MACRO(972, __VA_ARGS__) \
MU_DO_971(MACRO, __VA_ARGS__)


#define MU_DO_973(MACRO, ...) \
MACRO(973, __VA_ARGS__) \
MU_DO_972(MACRO, __VA_ARGS__)


#define MU_DO_974(MACRO, ...) \
MACRO(974, __VA_ARGS__) \
MU_DO_973(MACRO, __VA_ARGS__)


#define MU_DO_975(MACRO, ...) \
MACRO(975, __VA_ARGS__) \
MU_DO_974(MACRO, __VA_ARGS__)


#define MU_DO_976(MACRO, ...) \
MACRO(976, __VA_ARGS__) \
MU_DO_975(MACRO, __VA_ARGS__)


#define MU_DO_977(MACRO, ...) \
MACRO(977, __VA_ARGS__) \
MU_DO_976(MACRO, __VA_ARGS__)


#define MU_DO_978(MACRO, ...) \
MACRO(978, __VA_ARGS__) \
MU_DO_977(MACRO, __VA_ARGS__)


#define MU_DO_979(MACRO, ...) \
MACRO(979, __VA_ARGS__) \
MU_DO_978(MACRO, __VA_ARGS__)


#define MU_DO_980(MACRO, ...) \
MACRO(980, __VA_ARGS__) \
MU_DO_979(MACRO, __VA_ARGS__)


#define MU_DO_981(MACRO, ...) \
MACRO(981, __VA_ARGS__) \
MU_DO_980(MACRO, __VA_ARGS__)


#define MU_DO_982(MACRO, ...) \
MACRO(982, __VA_ARGS__) \
MU_DO_981(MACRO, __VA_ARGS__)


#define MU_DO_983(MACRO, ...) \
MACRO(983, __VA_ARGS__) \
MU_DO_982(MACRO, __VA_ARGS__)


#define MU_DO_984(MACRO, ...) \
MACRO(984, __VA_ARGS__) \
MU_DO_983(MACRO, __VA_ARGS__)


#define MU_DO_985(MACRO, ...) \
MACRO(985, __VA_ARGS__) \
MU_DO_984(MACRO, __VA_ARGS__)


#define MU_DO_986(MACRO, ...) \
MACRO(986, __VA_ARGS__) \
MU_DO_985(MACRO, __VA_ARGS__)


#define MU_DO_987(MACRO, ...) \
MACRO(987, __VA_ARGS__) \
MU_DO_986(MACRO, __VA_ARGS__)


#define MU_DO_988(MACRO, ...) \
MACRO(988, __VA_ARGS__) \
MU_DO_987(MACRO, __VA_ARGS__)


#define MU_DO_989(MACRO, ...) \
MACRO(989, __VA_ARGS__) \
MU_DO_988(MACRO, __VA_ARGS__)


#define MU_DO_990(MACRO, ...) \
MACRO(990, __VA_ARGS__) \
MU_DO_989(MACRO, __VA_ARGS__)


#define MU_DO_991(MACRO, ...) \
MACRO(991, __VA_ARGS__) \
MU_DO_990(MACRO, __VA_ARGS__)


#define MU_DO_992(MACRO, ...) \
MACRO(992, __VA_ARGS__) \
MU_DO_991(MACRO, __VA_ARGS__)


#define MU_DO_993(MACRO, ...) \
MACRO(993, __VA_ARGS__) \
MU_DO_992(MACRO, __VA_ARGS__)


#define MU_DO_994(MACRO, ...) \
MACRO(994, __VA_ARGS__) \
MU_DO_993(MACRO, __VA_ARGS__)


#define MU_DO_995(MACRO, ...) \
MACRO(995, __VA_ARGS__) \
MU_DO_994(MACRO, __VA_ARGS__)


#define MU_DO_996(MACRO, ...) \
MACRO(996, __VA_ARGS__) \
MU_DO_995(MACRO, __VA_ARGS__)


#define MU_DO_997(MACRO, ...) \
MACRO(997, __VA_ARGS__) \
MU_DO_996(MACRO, __VA_ARGS__)


#define MU_DO_998(MACRO, ...) \
MACRO(998, __VA_ARGS__) \
MU_DO_997(MACRO, __VA_ARGS__)


#define MU_DO_999(MACRO, ...) \
MACRO(999, __VA_ARGS__) \
MU_DO_998(MACRO, __VA_ARGS__)


#define MU_DO_1000(MACRO, ...) \
MACRO(1000, __VA_ARGS__) \
MU_DO_999(MACRO, __VA_ARGS__)


#define MU_DO_1001(MACRO, ...) \
MACRO(1001, __VA_ARGS__) \
MU_DO_1000(MACRO, __VA_ARGS__)


#define MU_DO_1002(MACRO, ...) \
MACRO(1002, __VA_ARGS__) \
MU_DO_1001(MACRO, __VA_ARGS__)


#define MU_DO_1003(MACRO, ...) \
MACRO(1003, __VA_ARGS__) \
MU_DO_1002(MACRO, __VA_ARGS__)


#define MU_DO_1004(MACRO, ...) \
MACRO(1004, __VA_ARGS__) \
MU_DO_1003(MACRO, __VA_ARGS__)


#define MU_DO_1005(MACRO, ...) \
MACRO(1005, __VA_ARGS__) \
MU_DO_1004(MACRO, __VA_ARGS__)


#define MU_DO_1006(MACRO, ...) \
MACRO(1006, __VA_ARGS__) \
MU_DO_1005(MACRO, __VA_ARGS__)


#define MU_DO_1007(MACRO, ...) \
MACRO(1007, __VA_ARGS__) \
MU_DO_1006(MACRO, __VA_ARGS__)


#define MU_DO_1008(MACRO, ...) \
MACRO(1008, __VA_ARGS__) \
MU_DO_1007(MACRO, __VA_ARGS__)


#define MU_DO_1009(MACRO, ...) \
MACRO(1009, __VA_ARGS__) \
MU_DO_1008(MACRO, __VA_ARGS__)


#define MU_DO_1010(MACRO, ...) \
MACRO(1010, __VA_ARGS__) \
MU_DO_1009(MACRO, __VA_ARGS__)


#define MU_DO_1011(MACRO, ...) \
MACRO(1011, __VA_ARGS__) \
MU_DO_1010(MACRO, __VA_ARGS__)


#define MU_DO_1012(MACRO, ...) \
MACRO(1012, __VA_ARGS__) \
MU_DO_1011(MACRO, __VA_ARGS__)


#define MU_DO_1013(MACRO, ...) \
MACRO(1013, __VA_ARGS__) \
MU_DO_1012(MACRO, __VA_ARGS__)


#define MU_DO_1014(MACRO, ...) \
MACRO(1014, __VA_ARGS__) \
MU_DO_1013(MACRO, __VA_ARGS__)


#define MU_DO_1015(MACRO, ...) \
MACRO(1015, __VA_ARGS__) \
MU_DO_1014(MACRO, __VA_ARGS__)


#define MU_DO_1016(MACRO, ...) \
MACRO(1016, __VA_ARGS__) \
MU_DO_1015(MACRO, __VA_ARGS__)


#define MU_DO_1017(MACRO, ...) \
MACRO(1017, __VA_ARGS__) \
MU_DO_1016(MACRO, __VA_ARGS__)


#define MU_DO_1018(MACRO, ...) \
MACRO(1018, __VA_ARGS__) \
MU_DO_1017(MACRO, __VA_ARGS__)


#define MU_DO_1019(MACRO, ...) \
MACRO(1019, __VA_ARGS__) \
MU_DO_1018(MACRO, __VA_ARGS__)


#define MU_DO_1020(MACRO, ...) \
MACRO(1020, __VA_ARGS__) \
MU_DO_1019(MACRO, __VA_ARGS__)


#define MU_DO_1021(MACRO, ...) \
MACRO(1021, __VA_ARGS__) \
MU_DO_1020(MACRO, __VA_ARGS__)


#define MU_DO_1022(MACRO, ...) \
MACRO(1022, __VA_ARGS__) \
MU_DO_1021(MACRO, __VA_ARGS__)


#define MU_DO_1023(MACRO, ...) \
MACRO(1023, __VA_ARGS__) \
MU_DO_1022(MACRO, __VA_ARGS__)


#define MU_DO_1024(MACRO, ...) \
MACRO(1024, __VA_ARGS__) \
MU_DO_1023(MACRO, __VA_ARGS__)



#define MU_DO(TIMES, MACRO, ...) MU_C2(MU_DO_, TIMES)(MACRO, __VA_ARGS__)


/* we need some sort of macro that does:
MU_IF(0, "true", "false") => "false"
MU_IF(1, "true", "false") => "true"
MU_IF(X, "true", "false") => "true"
*/

#define MU_INTERNALIF(x) MU_INTERNALIF##x
#define MU_INTERNALIF0

#define MU_ISZERO(x) MU_COUNT_ARG(MU_INTERNALIF(x))

#define MU_IF(condition, trueBranch, falseBranch) MU_C2(MU_IF,MU_ISZERO(condition))(trueBranch, falseBranch)
#define MU_IF0(trueBranch, falseBranch) falseBranch
#define MU_IF1(trueBranch, falseBranch) trueBranch


/*the following macro want to eat empty arguments from a list */
/*examples:                                                   */
/*MU_EAT_EMPTY_ARGS(, , X) expands to X                       */

#define MU_EXPAND_TO_NOTHING(arg)
#define MU_EAT_EMPTY_ARG(arg_count, arg) MU_IF(MU_ISEMPTY(arg),,arg) MU_IF(MU_ISEMPTY(arg),MU_EXPAND_TO_NOTHING,MU_IFCOMMALOGIC)(MU_DEC(arg_count))
#define MU_EAT_EMPTY_ARGS(...) MU_FOR_EACH_1_COUNTED(MU_EAT_EMPTY_ARG, __VA_ARGS__)

#define MU_DEFINE_ENUMERATION_CONSTANT(x) x,
/*MU_DEFINE_ENUM goes to header*/
#define MU_DEFINE_ENUM(enumName, ...) typedef enum MU_C2(enumName, _TAG) { MU_FOR_EACH_1(MU_DEFINE_ENUMERATION_CONSTANT, __VA_ARGS__)} enumName; \
    extern const char* MU_C2(enumName,Strings)(enumName value); \
    extern int MU_C2(enumName, _FromString)(const char* enumAsString, enumName* destination);


#define MU_DEFINE_ENUMERATION_CONSTANT_AS_WIDESTRING(x) MU_C2(L, MU_TOSTRING(x)) , 
#define MU_DEFINE_ENUMERATION_CONSTANT_AS_STRING(x) MU_TOSTRING(x) , 
/*MU_DEFINE_ENUM_STRINGS goes to .c*/
#define MU_DEFINE_ENUM_STRINGS(enumName, ...) const char* MU_C2(enumName, StringStorage)[MU_COUNT_ARG(__VA_ARGS__)] = {MU_FOR_EACH_1(MU_DEFINE_ENUMERATION_CONSTANT_AS_STRING, __VA_ARGS__)}; \
const char* MU_C2(enumName,Strings)(enumName value)                   \
{                                                                  \
    if((int)value>=MU_COUNT_ARG(__VA_ARGS__))                      \
    {                                                              \
        /*this is an error case*/                                  \
        return "NULL";                                             \
    }                                                              \
    else                                                           \
    {                                                              \
        return MU_C2(enumName, StringStorage)[value];              \
    }                                                              \
}                                                                  \
int MU_C2(enumName, _FromString)(const char* enumAsString, enumName* destination)  \
{                                                                               \
    if(                                                                         \
        (enumAsString==NULL) || (destination==NULL)                             \
    )                                                                           \
    {                                                                           \
        return MU_FAILURE;                                                      \
    }                                                                           \
    else                                                                        \
    {                                                                           \
        size_t i;                                                               \
        for(i=0;i<MU_COUNT_ARG(__VA_ARGS__);i++)                                \
        {                                                                       \
            if(strcmp(enumAsString, MU_C2(enumName, StringStorage)[i])==0)      \
            {                                                                   \
                *destination = (enumName)i;                                     \
                return 0;                                                       \
            }                                                                   \
        }                                                                       \
        return MU_FAILURE;                                                      \
    }                                                                           \
}                                                                               \

#define MU_DEFINE_LOCAL_ENUM(enumName, ...) typedef enum MU_C2(enumName, _TAG) { MU_FOR_EACH_1(MU_DEFINE_ENUMERATION_CONSTANT, __VA_ARGS__)} enumName; \
static const char* MU_C2(enumName, StringStorage)[MU_COUNT_ARG(__VA_ARGS__)] = {MU_FOR_EACH_1(MU_DEFINE_ENUMERATION_CONSTANT_AS_STRING, __VA_ARGS__)}; \
static const char* MU_C2(enumName,Strings)(enumName value)            \
{                                                                  \
    if((int)value<0 || (int)value>=MU_COUNT_ARG(__VA_ARGS__))      \
    {                                                              \
        /*this is an error case*/                                  \
        return "NULL";                                             \
    }                                                              \
    else                                                           \
    {                                                              \
        return MU_C2(enumName, StringStorage)[value];              \
    }                                                              \
}


#define MU_ENUM_TO_STRING(enumName, enumValue) MU_C2(enumName, Strings)(enumValue)
#define MU_STRING_TO_ENUM(stringValue, enumName, addressOfEnumVariable) MU_C2(enumName, _FromString)(stringValue, addressOfEnumVariable)

#define MU_EMPTY()
#define MACRO_UTILS_DELAY(id) id MU_EMPTY MU_LPAREN )

#define MU_DEFINE_ENUMERATION_CONSTANT_2(enumerationConstant, constantExpression) enumerationConstant = constantExpression,

#define MU_DECLARE_ENUM_STRINGS_2(enumIdentifier, ...) extern const char* MU_C2(enumIdentifier,_ToString)(enumIdentifier enumerationConstant);

#define MU_DEFINE_ENUM_2(enumIdentifier, ... ) typedef enum MU_C2(enumIdentifier, _TAG) {MU_FOR_EACH_2(MU_DEFINE_ENUMERATION_CONSTANT_2, __VA_ARGS__)} enumIdentifier; \
    MU_DECLARE_ENUM_STRINGS_2(enumIdentifier, __VA_ARGS__)

typedef struct ENUM_VALUE_AND_STRING_TAG
{
    int value;
    const char* valueAsString;
}ENUM_VALUE_AND_STRING;

#define MU_DEFINE_ENUM_VALUE_AND_STRING(enumerationConstant, constantExpression) {enumerationConstant, MU_TOSTRING(enumerationConstant)},
#define MU_DEFINE_ENUM_STRINGS_2(enumIdentifier, ... ) static const ENUM_VALUE_AND_STRING MU_C2(enumIdentifier, _ValuesAndStrings)[MU_DIV2(MU_COUNT_ARG(__VA_ARGS__))] ={MU_FOR_EACH_2(MU_DEFINE_ENUM_VALUE_AND_STRING, __VA_ARGS__)}; \
const char* MU_C2(enumIdentifier,_ToString)(enumIdentifier value)                                                                                                                                                       \
{                                                                                                                                                                                                                    \
    for(size_t i=0;i<sizeof(MU_C2(enumIdentifier, _ValuesAndStrings))/sizeof(MU_C2(enumIdentifier, _ValuesAndStrings)[0]);i++)                                                                                             \
    {                                                                                                                                                                                                                \
        if(MU_C2(enumIdentifier, _ValuesAndStrings)[i].value == (int)value)                                                                                                                                             \
        {                                                                                                                                                                                                            \
            return MU_C2(enumIdentifier, _ValuesAndStrings)[i].valueAsString;                                                                                                                                           \
        }                                                                                                                                                                                                            \
    }                                                                                                                                                                                                                \
    return "NULL";                                                                                                                                                                                                   \
}                                                                                                                                                                                                                    \

#define MU_ENUM_TO_STRING_2(enumIdentifier, value) MU_C2(enumIdentifier,_ToString)(value)

#define MU_DEFINE_STRUCT_FIELD(fieldType, fieldName) fieldType fieldName;

/*MU_DEFINE_STRUCT allows creating a struct typedef based on a list of fields*/
#define MU_DEFINE_STRUCT(structName, ...) typedef struct MU_C2(structName, _TAG) { MU_FOR_EACH_2(MU_DEFINE_STRUCT_FIELD, __VA_ARGS__)} structName;

#ifdef __cplusplus
}
#endif

#endif /*MACRO_UTILS_H*/
