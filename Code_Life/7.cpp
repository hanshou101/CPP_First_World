//#include <iostream>
//#include "Sales_data.h"
//#include "Sales_item.h"
//#include "Sales_item.h"
//#include "Sales_item.h"
//#include "Sales_item.h"
//#include "Sales_item.h"
//#include "Sales_item.h"
//#include "Sales_item.h"
//#include "Sales_item.h"
//
//int main1() {
//
//    Sales_data data1, data2;
//
//    double price = 0;
//
//    std::cout << "第一本书的  isbn  卖出数量  价格" << std::endl;
//
//    std::cin >> data1.bookNo >> data1.units_sold >> price;
//
//    data1.revenue = data1.units_sold * price;
//
//
//    std::cout << "第二本书的  isbn  卖出数量  价格" << std::endl;
//
//    std::cin >> data2.bookNo >> data2.units_sold >> price;
//
//    data2.revenue = data2.units_sold * price;
//
//
//    if (data1.bookNo == data2.bookNo) {
//
//        unsigned totalCount = data1.units_sold + data2.units_sold;
//
//        double totalRevenue = data1.revenue + data2.revenue;
//
//        std::cout << " ISBN编号 " << data1.bookNo << " 总量 " << totalCount << "  总销售额  " << totalRevenue << "  "
//                  << std::endl;
//
//
//        if (totalCount != 0) {
//            std::cout << " 平均价格 " << totalRevenue / totalCount << std::endl;
//        } else {
//            std::cout << " (no sales) " << std::endl;
//        }
//        return 0;
//
//
//    } else {
//
//        std::cerr << " Data must refer to the same isbn " << std::endl;
//
//        return -1;
//    }
//
//
//    return 0;
//}