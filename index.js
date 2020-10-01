// // JavaScript math has some serious issues.

// // Say your app is responsible for tracking transactions between
//  users and vendors. One of those vendors is a floral distribution
//   company, sending large units to stores all over America containing thousands of flowers.
//    Let’s calculate how much the buyer should pay. Copy and paste the following code into your browser console or run it here:


const flower = { price: 0.94 };

const calculateFlowersTotal = n => n * flower.price;
let bundles = [
    calculateFlowersTotal(5),
    calculateFlowersTotal(20),
    calculateFlowersTotal(100),
    calculateFlowersTotal(500)
];
let order = [7, 3, 0, 5];
let orderTotal = order.reduce( 
    (acc, quantity, i) => 
      acc += quantity * bundles[i], 0);
      console.log(‘Order subtotal: ‘, orderTotal + ‘\n’);
      let orderTotalWithTax = orderTotal * 1.0725; //should return 2616.14925
      console.log(‘Should return true: ‘, orderTotalWithTax === 2616.14925);
      console.log(‘\nWhat gives? Let's have a look..\n’);
      console.log(‘calculated total with tax: ‘, orderTotalWithTax);
